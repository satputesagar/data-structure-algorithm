/* reveser 

input: 5
1 2 3 s 4
output 4 s 3 2 1

time complexity : O(n)
*/


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
    cout<<"\n"<<"{";

    for(int i= 0; i<n ;i++)
    {
        revarr[i]=arr[n-i-1];   // reveser elements
        cout<<arr[i]<<" , ";
        
    }
    cout<<"}"<<"\n"<<"{";
    for(int i=0;i<n;i++)
    {
        cout<<revarr[i]<<" , ";
    }
    cout<<"}";
return 0;
}