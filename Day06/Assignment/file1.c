/*Q1. rotate array every kth element


i/p
1 2 3 4 5 6 7 8 9
k= 3
o/p
3 2 1 6 5 4 9 8 7

i/p
1 2 3 4 5 6 7 8 9
k= 4
o/p
4 3 2 1 7 6 5 4 9 8 */

#include <stdio.h>    
     
int main()    
{    

    int arr[] = {1, 2, 3, 4, 5};     

    int length = sizeof(arr)/sizeof(arr[0]);    

    int n = 3;    
        

    printf("Original array: \n");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr[i]);     
  }      
        

    for(int i = 0; i < n; i++){    
        int j, first;    
        //Stores the first element of the array    
        first = arr[0];    
        
        for(j = 0; j < length-1; j++){    
            //Shift element of array by one    
            arr[j] = arr[j+1];    
        }    
            
        arr[j] = first;    

       }    
            
        printf("\n");    
            
        
        printf("Array after left rotation: \n");    
        for(int i = 0; i < length; i++){    
            printf("%d ", arr[i]);    
        }    
        return 0;    
    }    

