#include<stdio.h>
#include<conio.h>
void main()
{
    char str[100];
    int i,pos;
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++);
    printf("\nThe length of string is %d",i);
    printf("\nEnter the position of the character from which we have to truncate the string: ");
    scanf("%d",&pos);
    str[i-pos]='\0';
    printf("%s",str);
    getch();
}