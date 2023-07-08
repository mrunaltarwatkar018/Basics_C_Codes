#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[3][3],trans[3][3],i,j;
    printf("Enter the elements of Given Matrix:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nThe Given Matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("\nThe Transpose Operation is started:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            trans[i][j]=arr[j][i];
        }
    }
    printf("\nThe Transpose of matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",trans[i][j]);
        }
        printf("\n");
    }
    getch();
}