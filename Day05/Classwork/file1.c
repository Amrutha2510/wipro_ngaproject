#include<stdio.h>
int n;
int main()
{
    printf("Enter the age:");
    scanf("%d", &n);
    if (n < 18)
    {
        printf("You are not eligible to vote");
    }
    else
    {
        if (n >=18 && n <=65)
        {
            printf("You are major and eligible to vote");
        }
        else
            printf("You are senior citizen and eligible to vote");
    }
}