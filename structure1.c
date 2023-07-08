#include<stdio.h>
#include<conio.h>
struct student
{
    int Age;
    int Rollno;
    int Enrollno;
    char name[100];
};
void main()
{ 
    struct student S1;
    printf("Enter the student information: ");
    S1.Age = 20;
    S1.Rollno = 01;
    S1.Enrollno = 2;
    S1.name ; "ABXYZ";
    printf("\nThe information is: ");
    printf("\nThe age of the student is %d",S1.Age);
    printf("\nThe roll no of the student is %d",S1.Rollno);
    printf("\nThe enroll no of the student is %d",S1.Enrollno);
    printf("\nThe name of the student is %s",S1.name);
    getch();
}