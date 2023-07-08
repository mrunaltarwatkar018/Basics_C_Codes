#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[3]={10,20,30};
    printf("Address &arr[0]: %u  value : %d",&arr[0],(arr[0])); //with pointers
    printf("Address &arr[0]: %u  value : %d",&arr[0],arr[0]); //normal way
    getch();
}