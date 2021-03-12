/*
Fun with Rotation ####
Constraints
1 ≤ N ≤ 100000
1 ≤ M ≤ 100000
1 ≤ d ≤ N, in all the queries
1 ≤ elements of A ≤ 1000000
The array A and the queries of the type R are 1-based.

Example
Input:
5 5
5 4 3 3 9
R 1
C 4
R 5
A 3
R 2
Output:
5
3
3
Explanation
The initial array : 5 4 3 3 9

The answer for R 1 : 5

The array after C 4 : 9 5 4 3 3

The answer for R 5 : 3

The array after A 3 : 4 3 3 9 5

The answer for R 2 : 3


*/




#include<iostream>
using namespace std;
int main()
{
        int n,m;
        cin>>n>>m;
             
         
            int a[n];
             for(int i=0;i<n;i++)cin>>a[i];
              int ans=0;
             for(int i=0;i<m;i++)
             {
                 char c;
                   int l;
                   cin>>c>>l;
                      if(c=='R')
                         cout<<a[(ans+l-1)%n]<<endl;
                       else if(c=='C')
                      {     ans=(ans+l)%n; }
                         else{ans=(ans-l+n)%n; }
                 
             }
       
return 0;
}