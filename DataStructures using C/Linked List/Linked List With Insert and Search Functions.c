/*
Author: Lalith Kumar aka LexiLominite
Program: Linked List with Search and Insert functions
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
int data;
struct node *next;
};
struct node *first=NULL;
struct node *last=NULL;
struct node *temp=NULL;
struct node *newnode=NULL;

void create();
void display();
void insert();
void search();
int opt,ele, i, count=0;

void main()
{
while (1)
{
	printf("\n1.Create\n2.Display\n3.Insert\n4.Search\n5.Exit\n");
	printf("Enter the option: ");
	scanf("%d",&opt);
	switch (opt)
	{
		case 1: create();
				break;
		case 2: display();
				break;
		case 3: insert();
				break;
		case 4: search();
				break;
		case 5: exit(0);
				break;
		default: printf("Please enter the correct choice :-(");
	}
}
}
void create()
{
newnode = (struct node *)malloc(sizeof(struct node));
printf("Enter the element to be created: ");
scanf("%d",&ele);
newnode->data=ele;

if (first==NULL)
	{
		first=newnode;
	}
	else
	{
		last->next=newnode;
	}

last=newnode;
printf("Element: %d was added :-)",ele);
count++;
}

void display()
{
if (first==NULL)
{
	printf("\nNo elements found please add a few and try again :-)\n");
}
else
{
	temp=first;
	printf("\nId Data Address\n");
	for(i=1; i<=count; i++)
	{
		printf("%2d %4d %p\n",i,temp->data, temp);
		if (i!=count)
		{
			temp = temp->next;
		}
	}

}
}
void insert()
{
	printf("Enter the element to be inserted: ");
	scanf("%d", &ele);
	int key;
	printf("Enter the place of the element to be inserted: ");
	scanf("%d",&key);
	newnode = (struct node *)malloc(sizeof(struct node));
	newnode -> data= ele;


if ( key==1)
{
	newnode->next=first->next;
	first->next=newnode;
}
else if (key==count)
{
	last->next=newnode;
	last=newnode;
}
else
{
temp = first;
for (i=0; i<key-1; i++)
{
	temp = temp->next;
}
	newnode -> next = temp->next;
	temp->next = newnode;
}
count ++;

}

void search()
{
	int key,foundat[5],flag=0;
	printf("Enter the number to be searched: ");
	scanf("%d",&key);
	temp=first;
for (i=1; i<=count; i++)
{

if (temp->data==key)
	{
		foundat[flag]=i;
		flag++;

	}
temp = temp->next;
}
if (flag>0)
{
	printf("\n%d is %d times in the list\n",key,flag);
	for (i=0;i<flag;i++)
	{
		printf("\n%d is found at %d\n",key,foundat[i]);
	}
}
else
{
	printf("%d is not found",key);
}
}
