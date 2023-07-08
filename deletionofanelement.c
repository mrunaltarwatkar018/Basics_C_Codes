#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[5],i,ele,pos;
    printf("Enter the elements of an array: ");
    for(i=0; i<5; i++)
    {
        scanf("%d",arr[i]);
    }
    printf("\nThe array elements are: ");
    for(i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nEnter the element to be deleted: ");
    scanf("%d",&ele);
    for(i=0;i<5;i++)
    {
        if(arr[i]==ele)
        {
            pos=i;
            break;
        }
    }
    if(pos!=-1)
    {
        for(i=pos;i<4;i++)
        {
            arr[i]=arr[i+1];
        }
        printf("\nThe elements of an array: ");
        for(i=0;i<4;i++)
        {
            printf("%d\t",arr[i]);
        }
    }
    else
    {
        printf("\nElement is not found.");
    }
    getch();
}