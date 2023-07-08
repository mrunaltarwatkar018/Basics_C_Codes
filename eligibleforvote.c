#include<stdio.h>
#include<conio.h>
void main()
{
    int age;
    printf('Enter the age: ');
    scanf("%d",&age);
    (age>=18)?(printf("Eligible for Vote.")):(printf("Not eligible for vote."));
    getch();
}