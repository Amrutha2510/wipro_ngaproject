/*Capture Employee 10 records in the structure and store it in a file*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct emp {
    char name[50],gender[50], Address[50];
    float salary;
    int Slno, employeenum, phonenumber;
};
struct emp e;

long int size = sizeof(e);

FILE *fp, *ft;

void addrecord()
{
    system("cls");
    fseek(fp, 0, SEEK_END);
    char another = 'y';

    while(another =='y')
    {
        printf("\nEnter Slno:");
        scanf("%d", &e.Slno);

        printf("\nEnter Employee ID:");
        scanf("%d", &e.employeenum);

        printf("\nEnter Name:");
        scanf("%s", e.name);

        printf("\nEnter Gender:");
        scanf("%s", e.gender);

        printf("\nEnter Salary:");
        scanf("%f", &e.salary);

        printf("\nEnter Phone number :");
        scanf("%d", &e.phonenumber);

        printf("\nEnter Address:");
        scanf("%s", e.Address);

        fwrite(&e, size, 1 , fp);

        printf("\n Want to add anotherrecord (Y?N):");
        fflush(stdin);

        scanf("%c", &another);
    }
}
void displayrecord()
{
    system("cls");

    rewind(fp);

    printf("\n===============================================================\n");
    printf("\nSlno\tEmployee ID\tName\tGender\tSalary\tPhone number\tAddress\n",e.Slno,e.employeenum,e.name,e.gender,e.salary,e.phonenumber,e.Address);
    printf("=================================================================\n");

    while(fread(&e, size, 1 , fp) ==1)
         printf("\n%d\t%d\t%s\t%s\t%f\t%d\t%s", e.Slno,e.employeenum,e.name,e.gender,e.salary,e.phonenumber,e.Address);

    system("pause");

}