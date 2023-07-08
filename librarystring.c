#include<stdio.h>
#include<conio.h>
void main()
{
    char str1[100];
    char str2[100]="NAGPUR";
    char str3[100]="GCOEN";

    printf("Enter the string: ");
    fgets(str1,sizeof(str1),stdin);
    printf("\nThe length of str1 is : %d",strlen(str1));
    printf("\nThe lowercase from of str2 is : %s",strlwr("NAGPUR"));
    printf("\nThe uppercase from of str3 is : %s",strupr("GCOEN"));
    printf("\nThe reverse of the string is is : %s",strrev("NAGPUR"));
    printf("\nThe concanitation of str1 and str3 is : %s",strcat(str1,str3));
    if(strcmp(str1,str2)==0)
    {
        printf("Strings are Equal.");
    }
    else
    {
        printf("Strins are Not Equal.");
    }
    getch();
}