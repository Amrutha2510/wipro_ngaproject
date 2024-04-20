/*Calculator*/
#include<stdio.h>
int main()
{
    int num1, num2, operator;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the operator 1:addition 2: subtraction 3: multiplication 4: division ");
    scanf("%d", &operator);
    switch(operator)
    {
        case 1: printf("Output: %d", num1 + num2);
            break; 
        case 2: printf("Output: %d", num1 - num2);
            break; 
        case 3: printf("Output: %d", num1 * num2);
            break; 
        case 4: if(num2 != 0)
                  printf("Result: %.2f", (float)num1/num2);
                else
                printf("Error division by 0 is not possible");
            break;
        default: printf("Invalid operator");
            break;
    }
    return 0;
}
