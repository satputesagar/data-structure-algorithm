#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function template for C++

class Solution {
  public:
    void prank(long long a[], int n){

      for(int i=0;i<n;i++)
      {
          a[i]+=((a[a[i]])%n)*n;

      }

      for(int i=0;i<n;i++)
      {
          a[i]=a[i]/n;

      }

    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n];
        for(int i = 0 ;i<n;i++){
            cin>>a[i];
        }
        Solution ob;
        ob.prank(a,n);

        for(int i = 0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<"\n";
    }
}