#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,arr[5],temp,min;
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
    printf("\nSelection Sort is started: ");
    for(i=0;i<5;i++)
    {
        min=i;
        for(j=j+1;j<5;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    printf("]nThe elements of an array After Sorting: ");
    for(i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    getch();
}