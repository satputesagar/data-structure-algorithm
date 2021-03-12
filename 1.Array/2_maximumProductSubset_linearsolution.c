#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
 
int min (int x, int y) {
    return (x < y) ? x : y;
}
 
// Function to return the maximum product of a subset of a given array
int findMaxProduct(int arr[], int n)
{
    // base case
    if (n == 0) {
        return 0;
    }
 
    // if the array contains only one element
    if (n == 1) {
        return arr[0];
    }
 
    int product = 1;        // to store the maximum product subset
 
    // stores the negative element having a minimum absolute value in the set
    int abs_min_so_far = INT_MAX;
 
    int negative = 0;       // maintain the count of -ve elements in the set
    int positive = 0;       // maintain the count of +ve elements in the set
 
    int contains_zero = 0;
 
    // traverse the given array
    for (int i = 0; i < n; i++)
    {
        // if the current element is negative
        if (arr[i] < 0)
        {
            negative++;
            abs_min_so_far = min(abs_min_so_far, abs(arr[i]));
        }
        // if the current element is positive
        else if (arr[i] > 0) {
            positive++;
        }
 
        // if the current element is zero
        if (arr[i] == 0) {
            contains_zero = 1;
        }
        else {
            product = product * arr[i];
        }
    }
 
    // if an odd number of negative elements are present, exclude the negative
    // element having a minimum absolute value from the subset
    if (negative & 1) {
        product = product / -abs_min_so_far;
    }
 
    // special case – set contains one negative element and one or more 0's
    if (negative == 1 && !positive && contains_zero) {
        product = 0;
    }
 
    // return maximum product
    return product;
}
 
int main()
{
    int arr[] = { -6, 4, -5, 8, -10, 0, 8 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    printf("The maximum product of a subset is %d", findMaxProduct(arr, n));
 
    return 0;
}


//  time complexity of the solution is O(n) and doesn't require any extra space 
// where n is the size of input