#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,arr[5],temp;
    printf("Enter the elements of array: ");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nThe array elements are: ");
    for(i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nBubble Sort is started: ");
    for(j=0;j<5;j++)
    {
        for(i=0;i<5;i++)
        {
            if(arr[i]>arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
    printf("]nThe elements of an array After Sorting: ");
    for(i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    getch();
}