/*read the content from the records of employee and store it in structure variable*/

#include <stdio.h>

#include <conio.h>

struct details
{
 char name[30];
 int age;
 char address[500];
 float salary;
};

int main()
{
 struct details detail;
 clrscr();
 printf("\nEnter name:\n");
 gets(detail.name);
 printf("\nEnter age:\n");
 scanf("%d",&detail.age);
 printf("\nEnter Address:\n");
 gets(detail.address);
 printf("\nEnter Salary:\n");
 scanf("%f",&detail.salary);


 printf("\n\n\n");
 printf("Name of the Employee : %s \n",detail.name);
 printf("Age of the Employee : %d \n",detail.age);
 printf("Address of the Employee : %s \n",detail.address);
 printf("Salary of the Employee : %f \n",detail.salary);

 getch();
}