/*
Author: Lalith Kumar aka LexiLominite
Program: Bubble Sort using C 

*/
#include <stdio.h>
void main()
{
    printf("\n\nBubble Sort using C \n\n\n\n\n\n");
    int a[15],i,n,j,temp ;
    printf("Enter the no.of elements: ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    printf("\nElements are added into array 'A' \n");
    printf("Sorting elements using Bubble Sort.......\n\n");

    for (i=0;i<n-1;i++)
    {
        for (j=0;j<n-i-1;j++)
        {
            if (a[j]>a[j+1])
            {
                temp = a[j];
                a[j]= a[j+1];
                a[j+1]=temp;
            }
        }
    }
printf("Sorted elements are: \n");
 for (i=0;i<n;i++)
    {
        printf("a[%d]: %d\n",i,a[i]);
        
    }


}
