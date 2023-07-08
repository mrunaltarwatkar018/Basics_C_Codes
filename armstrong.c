#include<stdio.h>
#include<conio.h>
void main()
{
    int num,rem,ori,val=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    ori=num;
    do
    {
        rem=num%10;
        val=val+rem*rem*rem*rem;
        num=num/10;
    } while (num!=0);
    
    if(val==ori)
    {
        printf("It is a Armstrong.");
    }
    else
    {
        printf("It is not a Armstrong.");
    }
    getch();
}