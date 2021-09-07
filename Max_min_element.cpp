/* maximum and minimum element program
time complexity: o(n)
input: 5
12 23 34 45 56 
output: max: 56
        min : 12

*/


#include<iostream>
using namespace std;

int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    int Max=arr[0],Min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>Max)
        {
            Max=arr[i];
        }
        if(arr[i]<Min)
        {
            Min=arr[i];
        }
    }
    cout<<"MAX :"<<Max<<endl;
    cout<<"MIN :"<<Min<<endl;
    return 0;
}