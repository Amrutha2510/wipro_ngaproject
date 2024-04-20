// Print the table with the user input and output: //

#include<stdio.h>
int main()
{
    int n, i, integer;
    printf("Enter the number:");
    scanf("%d", &n);

    do {
        printf("Enter the iteration (positive number): ");
        scanf("%d", &integer);
    }while(integer <= 0);

    for (i=1;i<=integer;i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;
}