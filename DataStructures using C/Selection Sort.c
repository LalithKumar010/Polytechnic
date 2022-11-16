/*
Author: Lalith Kumar aka LexiLominite
Program: Selection Sort using C 

*/
#include <stdio.h>

void main()
{

    int a[10],temp,n,i,j,k;

    printf("\n\nSelection Sort using C!\n\n\n");

    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements into the array....\n");
    for (i=0;i<n;i++)
    {
        printf("a[%d]: ",i);
        scanf("%d",&a[i]);

    }

    printf("Sorting elements using Selection Sort Technique!!");

    for (i=0;i<n-1;i++)
    {
        for (j=k=i;j<n;j++)
        {
            if (a[j]<a[k])
            {
                k=j;
            }
        }
        temp=a[i];
        a[i]=a[k];
        a[k]=temp;
    }
printf("Sorted elements are: \n");
for (i=0;i<n;i++)
    {
        printf("a[%d]: %d\n",i,a[i]);
        
    }


}

