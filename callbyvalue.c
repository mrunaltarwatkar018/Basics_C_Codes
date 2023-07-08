#include<stdio.h>
#include<conio.h>
void main()
{
    int a=5,b=5,c;
    c=mul(a,b);
    printf("Multiplication is : %d",c);
    getch();
}
int mul(int x,int y)
{
    int z;
    z= x*y;
    return z;
}