#include<stdio.h>
#include<conio.h>
void main()
{
    int num,rem,ori,rev=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    ori=num;
    while (num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(ori==rev)
    {
        printf("The number is palindrome.");
    }
    else
    {
        printf("The number is not a palindrome.");
    }
    getch();
}