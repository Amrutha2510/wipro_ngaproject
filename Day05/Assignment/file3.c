#include <stdio.h>

 int main()

{
    int i, num  = 50, odd_sum = 0, even_sum = 0;
    for (i = 1; i <= num; i++)

    {

        if (i % 2 == 0)

            even_sum = even_sum + i;

        else

            odd_sum = odd_sum + i;

    }

    printf("Sum of all odd numbers  = %d\n", odd_sum);

    printf("Sum of all even numbers = %d\n", even_sum);
    return 0;
}