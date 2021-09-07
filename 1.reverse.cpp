#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char arr[n] , revarr[n];
    for(int i=0 ; i< n ;i++){
        cin>>arr[i];  // character array enter elements
    }

    for(int i= 0; i<n ;i++)
    {
        revarr[i]=arr[i-n-1];
        cout<<arr[i]<<" , ";
    }
    for(int i=0;i<n;i++)
    {
        cout<<revarr[i]<<" ";
    }
return 0;
}