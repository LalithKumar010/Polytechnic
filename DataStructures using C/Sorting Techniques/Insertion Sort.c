/*
Author: Lalith Kumar aka LexiLominite
Program: Insertion Sorting using C
*/
#include <stdio.h>
void main()
{
    int a[15],i,j,k,n;
    printf("\n\nInsertion Sort using C\n\n\n");
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements into array: \n");
    for (i=0; i<n ; i++)
    {
        printf("a[%d]: ",i);
        scanf("%d",&a[i]);
    }

    printf("\nSorting elements using Insertion Sort Technique\n\n");
    for(i=1; i<n; i++)
    {
        j = i-1;
        k = a[i];
        while(j>=0 && a[j]>k)
        {   
            a[j+1]= a[j];
            j--;
        }
        a[j+1]=k;

    }
    printf("Sorted elements are: \n");
for (i=0;i<n;i++)
    {
        printf("a[%d]: %d\n",i,a[i]);
        
    }


    
    
}
