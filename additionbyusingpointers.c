#include<stdio.h>
#include<conio.h>
void main()
{
    int a=10;
    int *p;
    p=&a;
    printf("The value of a is : %d",a);
    printf("\nThe address of a is : %u",&a);
    printf("\nThe value of p is: %d",(*p));
    printf("\nThe address of p id : %u",p); 
    getch();
}