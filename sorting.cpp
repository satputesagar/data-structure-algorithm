/* sorting 0 1 2
input:2
4
2 3 4 5
output:1 1 1 2 
5
2 3 4 5 6
output: 1 1 1 1 2

time complexity:O(n)
*/

#include<iostream>
using namespace std;

void sort(int arr[],int n)
{
    int c0=0,c1=0,c2=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        c0++;
        else if(arr[i]==2)
        c2++;
        else 
        c1++;
    }
    for(int i=0;i<n;i++)
    {
        if(i>=0 && i<c0)
        arr[i]=0;
        else if(i>=c0 && i<c0+c1)
        arr[i]=1;
        else
        arr[i]=2;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        sort(arr,n);
        for(int i=0;i<n;i++) cout<<arr[i]<<" ";

    }
    return 0;
}