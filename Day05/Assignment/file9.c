/*Write a c program to print alphabet triangle.
Input: 5
Output:

         A
        ABA
       ABCBA
      ABCDCBA
     ABCDEDCBA*/
#include<stdio.h>

void main()
{
        int i,n,j;
        
        printf("Enter the no of lines\n");
        scanf("%d",&n);
        
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n-i;j++)
            {
                printf(" ");
            }
            for(j=1;j<=i;j++)
            {
                printf("%c",(char)(j+64));
            }
            for(j=i-1;j>=1;j--)
            {
                printf("%c",(char)(j+64));
            }
            printf("\n");
        }
}
