#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    if ((a%2==0))
    {
        printf("The number is Even.");
    }
    else
    {
        printf("The mumber is Odd.");
    }
    getch();
}