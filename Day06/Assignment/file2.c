/* Problem Statement:
Given an unsorted array a of size N of non-negative integers,
find a continuous sub-array which adds to a given number sum.

Input Format:
The first line contains an integer, denoting the size of the array.
The second line contains integers denoting the elements
of the array.
The last line contains an integer, denoting the sum.

Constraints
1<= n<=100
1<=arr<= 1000, where arr is the ith element of the array.
1<= n<=100000

Output Format:
The output line contains integers denoting the indexes.

TESTCASE 1:
Input:
7
[1, 4, 0, 0, 3, 10, 5]

sum = 7
Output:
Sum found between indexes 1 and 4*/

#include <stdio.h>  

int  subarraySum( int arr[], int n, int sum )  
{  
    int currentsum, i , j , k ;  
 
    for ( i = 0 ; i < n ; i++ )   
    {  
        currentsum = arr[ i ] ;  
        // try all subarrays starting with 'i'  
        for ( j = i + 1 ; j <= n ; j++ )   
        {  
            if (currentsum == sum) {  
            printf ( " Sum found between indexes %d and %d\n " , i , j -1 ) ;  
                printf( " Printing the required subarray: \n " ) ;  
                for( k = i ; k <= j - 1 ; k++ )  
                {  
                    printf( "  %d ",arr[ k ] ) ;  
                }  
                return 0 ;  
            }  
            if ( currentsum > sum || j == n )  
                break ;  
            currentsum = currentsum + arr[ j ] ;  
        }  
    }  
      
        printf( " \n No subarray found \n " ) ;  
}
 
// Driver program to test above function
int main()
{
    int j , arr[ 100 ] , n , sum ;  
    printf ( " Enter number of elements present in the array : " ) ;  
    scanf ( "%d " , &n ) ;  
    printf( " Enter array: " ) ;  
    for ( j = 0 ;  j < n ; j++ )  
    {  
        scanf ( "%d " , &arr[ j ] ) ;  
    }  
    printf( " Enter sum value: " ) ;  
    scanf( "%d " , &sum ) ;  
    subarraySum(arr, n, sum);
    return 0;
}


