#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[3][3],brr[3][3],sum[3][3],i,j;
    printf("Enter the elements FIRST array:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nEnter the elements SECOND array:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&brr[i][j]);
        }
    }
    printf("\nADDITION of matrix:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum[i][j]=arr[i][j]+brr[i][j];
        }
    }
    printf("\nSum of matrix After Addition:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    getch();
}