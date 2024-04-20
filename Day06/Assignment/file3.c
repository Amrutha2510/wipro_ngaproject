/*Q.3
Given an array A of N positive numbers. The task is to find the position
where equilibrium first occurs in the array. Equilibrium position in an array is a position such that the sum of elements before it is equal to the sum of   elements after it.

Input Format:
The first line contains an integer, denoting the size of the array.
The second line contains integers denoting the elements
of the array.
Constraints
1<= n<=100
1<=arr<= 1000, where arr is the ith element of the array.

Output Format:
The output line contains integer denoting an equilibrium
index (if any) or -1 (if no equilibrium indexes exist).

TESTCASE 1:
Input:
7
[-7, 1, 5, 2, -4, 3, 1]
3
[-7, 0, 0, 0, -4, 4, 0]
0
[0 0 0 0 -1]
4
Output:
3 */


 
#include <stdio.h>
 
int equilibrium(int arr[], int n)
{
    int i, j;
    int leftsum, rightsum;
 


    for (i = 0; i < n; ++i) {
 

        leftsum = 0;
        for (j = 0; j < i; j++)
            leftsum += arr[j];
 

        rightsum = 0;
        for (j = i + 1; j < n; j++)
            rightsum += arr[j];
 


        if (leftsum == rightsum)
            return i;
    }
 

    return -1;
}
 
// Driver code
int main()
{
    int arr[] = { -7, 1, 5, 2, -4, 3, 0 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
 
    // Function call
    printf("%d", equilibrium(arr, arr_size));
 
    getchar();
    return 0;
}

