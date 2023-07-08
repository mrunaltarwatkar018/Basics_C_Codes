#include<stdio.h>
#include<conio.h>
void main()
{
    char str1[100],str2[100];
    int i;
    printf("Enter the string: ");
    fgets(str1,sizeof(str1),stdin);
    for(i=0;str1[i]!='\0';i++)
    {
        str2[i]=str1[i];
    }
    printf("\nThe second string str2 is %s",str2);
    getch();
}