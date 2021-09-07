#include<iostream>
using namespace std;
// function to return gcd of a and b
int gcd(int a , int b)
{
    if(a == 0)
    return b;
    return gcd(b % a, a);
}
//function find gcd of array of number
int FindGCD(int arr[],int n)
{
    int result = arr[0];
    for(int i =0; i<n; i++)
    {
        result =gcd(arr[i],result);
        if(result ==1)
        {
            return 1;
        }
       
    }
     return result;
}
// main code
int main(void)
{
    int arr[]={2,4,6,8,16};
    int n = sizeof(arr) /sizeof(arr[0]);
    cout<<FindGCD(arr,n)<<endl;
    return 0;
}
/*
Time Complexity : O(N* long(M)) , where M is the smallest element of the array
Auxiliary space : O(1)
