#include <stdio.h>
#include <stdlib.h>
void deq();
void enq();
void display();
int cq[10],f=-1,r=-1,ele,count=0;
void main()
{
int n, i, opt, error_count=0;
while (1==1){
printf("\n1: Enqueue\n2: Dequeue\n3: Display\n4: Quit\nChoose The Following Operations: ");
scanf("%d",&opt);
switch (opt){
    case 1: enq();
            break;
    case 2: deq();
            break;
    case 3: display();
            break;
    case 4: exit(0);
            break;
    default: 
            error_count++;
            if(error_count>5)
            {
                printf("Quitting due to multiple error attempts :-(\nPress Enter:");
                getch(error_count);
                exit(0);
            }
            else{
                printf("Please enter the correct option :-)");
            }
}
}
}

void enq()
{
    if(count==5)
    {
        printf("Queue is full\n");
    }
    else{
        printf("Enter an element: ");
        scanf("%d",&ele);
        if(f==-1)
        {
            f=0;
            r=0;
        }
        cq[r]=ele;
        r++;
        if(r>4)
        r=0;
        count++;

    }

}

void deq()
{
    if(count==0)
    {
        printf("Queue is empty\n");
        }
        else
        {
            ele = cq[f];
            printf("Deleted element is %d \n",ele);
            f++;
            if(f>4)
            f=0;
            count --;
        }

}
void display()
{
int i;
for(i=f;i<=f+count;i++)
{
    printf("%d\t",cq[i]);
    printf("\n");
}
}

