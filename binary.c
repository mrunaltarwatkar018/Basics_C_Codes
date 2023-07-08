#include<stdio.h>
#include<conio.h>
void main()
{
    int i,arr[10],low=0,high=9,mid,key,flag=0;
    printf("Enter the elements of an array:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nThe array elements are:");
    for ( i = 0; i < 10 ; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nEnter the key:");
    scanf("%d",&key);
    printf("\nBinary search is started: ");
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            flag=1;
            break;
        }
        if(key>arr[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(flag==1)
    {
        printf("\nElement is found at position %d.",(mid+1));
    }
    else
    {
        printf("\nElement is not found.");
    }
    getch();
}