//Print the employee details//


#include<stdio.h>
int SLNo, ID,  Phone;
float Sal;
char Name[20], Gender[20], Address[20];
int main()
{
    scanf("%d\t%d\t%s\t%s\t%f\t%d\t%s",&SLNo,&ID,Name,Gender,&Sal,&Phone,Address);
    printf("===============================================================\n");
    printf("\t\t\tEmployee Details\t\t\t\n");
    printf("===============================================================\n");
    printf("\n");
    printf("SLNo \t ID \t Name \t Gender\t Sal \t Phone \t Address \n");
    printf("----\t ---\t-------\t ------\t ---\t ------- ------- \n");
    //printf("1\t 101\t Bhima\t M\t 10000.5 99999\t kar\n");
    printf("%d\t\t%d\t\t%s\t%s\t\t %.1f\t%d\t%s\n",SLNo,ID,Name,Gender,Sal,Phone,Address);
   
}

