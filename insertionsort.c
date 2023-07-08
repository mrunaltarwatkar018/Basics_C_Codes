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
    printf("\nThe elements of array are: ");
    for(i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nInsertion Sort is started: ");
    for(i=0;i<5;i++)
    {
        temp=arr[i];
        j=i-1;
        while (j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;
    }
    printf("]nThe elements of an array After Sorting: ");
    for(i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    getch();
}