#include<stdio.h>
#include<conio.h>
void main()
{
    char choice;
    printf("Enter your choice: ");
    scanf("%c",&choice);
    switch (choice)
    {
    case 'A':
        printf("It is a vowel.");
        break;
    case 'E':
        printf("It is a vowel.");
        break;
    case 'I':
        printf("It is a vowel.");
        break;
    case 'O':
        printf("It is a vowel.");
        break;
    case 'U':
        printf("It is a vowel.");
        break;
    
    default:
    printf("It is consonent.");
        break;
    }
    getch();
}