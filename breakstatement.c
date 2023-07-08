#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    for ( i = 1; i < 5; i++)
    {
        if (i==3)
        {
            break;
        }
        printf("%d\t",i);
    }
    getch();
}