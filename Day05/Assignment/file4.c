/*Find out the sum of series   3+33+333+3333+33333+333333*/

#include<stdio.h>
int a, sum=0, i=0;
int num = 3, n=5;
int main()
{
    while(i<n)
    {
        a = (a*10) +num;
        sum = sum + a;
        printf("%d+", a);
        i++;
    }
    printf("%d", a);
    printf("\nSum = %d", sum);

}
