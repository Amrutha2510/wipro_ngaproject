/*Find a partition point in array

Given an unsorted array of integers. Find an element such that all the elements to its left are smaller and to its right are greater. Print -1 if no such element exists.

Note that there can be more than one such elements. For example an array which is sorted in increasing order all elements follow the property. We need to find only one such element.

Examples :

Input :  A[] = {4, 3, 2, 5, 8, 6, 7}  
Output : 5

Input : A[] = {5, 6, 2, 8, 10, 9, 8}
Output : -1*/


#include <stdio.h>

 
int FindElement(int A[], int n)
{
    
    for (int i = 0; i < n; i++) {
       
        int flag = 0;
 
        
        for (int j = 0; j < i; j++)
            if (A[j] >= A[i]) {
                flag = 1;
                break;
            }
 

        for (int j = i + 1; j < n; j++)
            if (A[j] <= A[i]) {
                flag = 1;
                break;
            }
 
        
        if (flag == 0)
            return A[i];
    }
    return -1;
}
 
// driver program to test above function
int main()
{
    int A[] = { 4, 3, 2, 5, 8, 6, 7 };
    int n = sizeof(A) / sizeof(A[0]);
    FindElement(A,n);
    
    return 0;
}
