#include<stdio.h>
#include<conio.h>
void main()
{
    int a=75;
    if(a<100)
    {
        if(a<50)
        {
            printf("a is less than both 100 and 50.");
        }
        else
        {
            printf("a is greater than both 100 and 50.");
        }
    }
    else
    {
        printf("Total condition is false.");
    }
    getch();
}