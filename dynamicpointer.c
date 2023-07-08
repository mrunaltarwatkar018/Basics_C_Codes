#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int n=10;
    int *p;
    p=malloc(n);
    printf("The address %u",p);
    getch();
}