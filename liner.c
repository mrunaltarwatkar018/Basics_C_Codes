#include<stdio.h>
void main()
{
    int i,arr[5],key;
    printf("Enter the elements of an array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nThe array elements are:");
    for(i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nEnter the element to be searched:");
    scanf("%d",&arr[i]);
    printf("\nLinear search is started:");
    for(i=0;i<5;i++)
    {
        if(arr[i]==key);
        {
            break;
        }
    }
    if(i<5)
    {
        printf("\nThe key found at position %d.",(i+1));
    }
    else
    {
        printf("\nThe key is not found.");
    }
}
