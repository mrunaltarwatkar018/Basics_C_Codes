#include<stdio.h>
#include<conio.h>
void main()
{
    int num,fact;
    printf("Enter the numbers whose factorial is to be calculated: ");
    scanf("%d",&num);
    fact=factorial(num);
    printf("\nThe factorial of number is: %d",fact);
    getch();
}
int factorial(int N)
{
    if(N==0)
    {
        return 1;
    }
    else if (N==1)
    {
        return 1;
    }
    else
    {
        return N*factorial(N-1);
    }
}