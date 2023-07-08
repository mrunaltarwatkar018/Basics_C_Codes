#include<stdio.h>
#include<conio.h>
void main()
{
    char str[100];
    int i;
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++);
    printf("\nThe length of the string is: %d",i);
    getch();
}