/*Print series 0,3,8,15,24,35,48,63,80,99 given n = 10*/
#include<stdio.h>
int n=10;
int main()
{
   int i;
   i=1;
   while(i<n)
   {
    printf("%d,",(i*i)-1);
    i++;
   }
   printf("%d",(i*i)-1);
   return 0;
}
