#include<stdio.h>
#include<conio.h>
void main()
{
    char A='X';
    if (A=='Y')
    {
        printf("First Success.");
    }
    else
    {
        if (A=='Z')
        {
            printf("Second Success.");
        }
        else
        {
            printf("Third Success.");
        }
    }
    getch();
}