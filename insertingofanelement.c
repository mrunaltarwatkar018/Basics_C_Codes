#include<stdio.h>
#include<conio.h>
void main()
{
    int n,arr[n],i,ele,pos;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    printf("Enter the elements of an array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",arr[i]);
    }
    printf("\nThe array elements are: ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nEnter the element to be inserted: ");
    scanf("%d",&ele);
    printf("\nEnter the position of an element: ");
    scanf("%d",&pos);
    n++;
    for(i=n-1;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=ele;
    printf("\nThe elemenys of an array after insertion: ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    getch();
}