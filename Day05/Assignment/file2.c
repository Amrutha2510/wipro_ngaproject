#include<stdio.h>
int main()
{
  int n,i;
  n=64;
  for(i=1;i<n;i*=2)
  {
    printf("%d,", i);
  }
  printf("%d ", i);
  return 0;
}
