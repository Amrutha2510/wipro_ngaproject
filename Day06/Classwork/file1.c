#include<stdio.h>
#define SIZE 3

int main()
{
    int arr[SIZE] = {10, 20, 30};
    int b[] = {10, 20, 30 ,40, 50};
    printf("size of the b:%d", sizeof(b)/sizeof(int));
}