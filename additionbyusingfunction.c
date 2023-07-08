#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("Enter the numbers: ");
    scanf("%d%d",&a,&b);
    c=sum(a,b);
    printf("\nAddition is : %d",c); 
    getch();
}
int sum(int A,int B)
{
    int x;
    x= A+B;
    return x;
}