/**/

#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i=2,n=10000,flag=0,j;
    int target;
    printf("Enter the value:");
    scanf("%d", &target);
    int count=0;
    while(i<=n){
            flag=0;
            for(j=2;j<=i-1;j++){
                if(i%j==0){
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                count++;
               
            }
            if(count==target){
                    printf("%d th prime number is : %d",target,i);//print nth prime number
                break;
            }
        i++;
    }
    
    return 0;
}
