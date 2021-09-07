#include<iostream>
using namespace std;

bool check_key(int arr[] ,int x,int k, int n)
{
    int i;
    for (i = 0; i < n; i+k)
    {
        int j;
    for( j = 0;j < k; j++)
    if(arr[i+j]==x)
    break;
    if(j==k)
    return false;
    }

    if(i==n)
    return true;
    
    int j;
    for(j= i-k; j<n ;j++)
        if(arr[j]==x)
        break;
        if(j==k)
        return false;
return true;
}
int main(){
    int arr[]={1,2,3,4,3,5,6,3,7,8,3,9};
    int k= 3 , x=3;
    int n =sizeof(arr)/sizeof(arr[0]);
    if (check_key(arr,x,k,n))
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
 return 0;
}