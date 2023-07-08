#include<stdio.h>
#include<conio.h>
void main()
{
    int t1=0,t2=1,next,term,i;
    printf("Enter the number of terms: ");
    scanf("%d",&term);
    printf("%d\t%d\t",t1,t2);
    next=t1+t2;
    for ( i = 3; i <=term ; i++)
    {
        printf("%d\t",next);
        t1=t2;
        t2=next;
        next=t1+t2;
    }
    getch();
}