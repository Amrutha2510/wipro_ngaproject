/*Program to find nth number made of given four digits 1, 4,6 and 9 as the only digits..
*/
#include<stdio.h>

int number_of_digits(int n)
{
    int i, res, sum = 0;
 
    for (i = 4, res = 1;; i *= 4, res++) {
        sum += i;
        if (sum >= n)
            break;
    }
    return res;
    
}
 
// Driver code
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d", &n);
    number_of_digits(n);
    return 0;
}