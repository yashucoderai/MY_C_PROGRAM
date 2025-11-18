#include<stdio.h>
int userdetails(){
   int age;
   char name,dept;
    printf("enter the name of the user\n");
    scanf("%s",&name);
    printf("enter the age of the user\n");
    scanf("%d",&age);
    printf("enter the department of the user\n");
    scanf("%s",&dept);
}
int main()
{
    userdetails();
}
