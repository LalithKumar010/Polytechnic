/*
Author: Lalith Kumar aka LexiLominite
Program: Simple Linked List with create and display functions
*/

#include <stdio.h>
#include <stdlib.h>

struct node{
int data;
struct node *next;
};

struct node *first=NULL;
struct node *last=NULL;
struct node *new=NULL;
struct node *temp=NULL;

int opt, i, count=0,ele;
void create();
void display();
void main()
{
    while (1)
    {
        printf("\n1.Create\n2.Display\n3.Quit\n");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1: create();
                    break;
            case 2: display();
                    break;
            case 3: exit(0);
                    break;
            default: printf("\nChoose the correct options :-(\n");

        }
    }
}

void create()
{
new = (struct node *)malloc(sizeof (struct node));
printf("Enter the number: ");
scanf("%d",&ele);
new->data = ele;
if (first==NULL)
{
    printf("\nNew List is being created....\n");
    first = new;

}
else 
{
    printf("\nAppending the existing list...\n");
    last->next = new;
    count ++;
}

last=new;
}
void display()
{
    if (first==NULL)
    {
        printf("The list is empty.....\nPlease add a few :-)\n");
    }
    else
    {
        temp = first;
        printf("Node NodeData NodeAddress\n");
        printf("____ ________ ________\n");
        for (i=0; i<=count; i++)
        {

        printf("%3d %8d %5d\n",i, temp->data, temp);    
        if (i!=count)
        {
            temp = temp->next;
        }
        }
    }
}
