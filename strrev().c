#include<stdio.h>
#include<conio.h>
void main()
{
    char str[100],temp;
    int i,len;
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++);
    len=i-1;
    {
        temp=str[i];
        str[i]=str[len];
        str[len]=temp;
        len--;
    }
    printf("\nThe reverse sequence of the string is %s",str);
    getch();
}