#include <stdio.h>
#include <stdlib.h>
void pop();
void push();
void display();
int stack[10],top=-1,ele,error_count=0;
void main()
{
int n, i, opt;
while (1==1){
printf("\n1: Push\n2: Pop\n3: Display\n4: Quit\nChoose The Following Operations: ");
scanf("%d",&opt);
switch (opt){
    case 1: push();
            break;
    case 2: pop();
            break;
    case 3: display();
            break;
    case 4: exit(0);
            break;
    default:  error_count++;
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

void push()
{
    if (top == 4)
    {
        printf("Stack Overflowed");
    }
    else
    {
        printf("Enter the element: ");
        scanf("%d",&ele);
        top++;
        stack[top]=ele;
    }
}

void pop()
{
        if(top == -1)
        {
                printf("Stack Underflow");
        }
        else{
                ele=stack[top];
                printf("\n\nDeleted element is %d \n",ele);
                top --;
        }

}
void display()
{
        int i;
        printf("\nElements in stack are: \n");
        for(i=top;i>=0;i--)
                {printf("%d\n",stack[i]);}
}
