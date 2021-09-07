/* Kth maximum and minimum element

time complexity: O(n)
input: 2
6
7 10 3 20 23 10
12
1
2 4 5 6 7 8 9
6
*/
#include<iostream>
#include<algorithm>
using namespace std;
int Kth_MAX_MIN(int arr[],int l,int r,int k) //kthSmallest
{
    sort(arr,arr+r+l); //sorting function arr[0], arr[0] + end + start
    return arr[k-l];  
}
/*
Complexity : O(n^2)
int kth_MAX_MIN(int arr[], int l, int r, int k) 
{
    //code here
    //complexity: O(nlogn)
    int temp;
    for(int i=0; i<k; i++)
    {
        for(int j=i+1; j<r+1 && i<r; j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    return arr[k-1];
}
*/



int main()
{
    int T;
     cin>>T; // tese case 
    while(T--)
    {
        int n;
        cin>> n; // number element 
        int arr[n];
        for(int i= 0;i<n;i++) cin>>arr[i];

        int k;
        cin>>k; // smaller number
        cout<<Kth_MAX_MIN(arr,0,n-1,k)<<endl;
        }
return 0;
}