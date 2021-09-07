#include<iostream>
#include<algorithm>
using namespace std;
int find_max_number(int arr[],int n)
{
int temp =*max_element(arr,arr+n);
return temp;
}
int main()
{
int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n ;++i)
    {
        cin>>arr[i];
    }
    cout<<find_max_number(arr,n);
return 0;
}