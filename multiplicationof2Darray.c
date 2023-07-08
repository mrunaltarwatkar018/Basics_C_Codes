#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[3][3],brr[3][3],mul[3][3]={0},i,j,k;
    printf("Enter the elements of First Matrix:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nEnter the elements of Second Matrix:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&brr[i][j]);
        }
    }
    printf("\nMULTIPLICATION of matrix is stated:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                mul[i][j]=arr[i][k]*brr[k][j]+mul[i][j];
            }
        }
    }
    printf("\nMULTIPLICATION of matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }
    getch();
}