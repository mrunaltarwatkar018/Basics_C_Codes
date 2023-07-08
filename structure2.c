#include<stdio.h>
#include<conio.h>
struct ETCStudent
{
    int rollno;
    char name[100];
};
void main()
{
    int i;
    struct ETCStudent e1[5];
    printf("Enter the student information: ");
    for(i=0;i<5;i++)
    {
        printf("Enter the roll no: ");
        scanf("%d",&e1[i].rollno);
        printf("Enter the name: ");
        scanf("%s",e1[i].name);
    }
    printf("\nThe information is: ");
    for(i=0;i<5;i++)
    {
        printf("\nThe rollno is : %d",e1[i].rollno);
        printf("The name is : %s",e1[i].name);
    }
    getch();
}