#include<iostream>
#include<stdlib.h>
using namespace std;
long long int GCDEuclid(long long int a,long long int b )
{
    if(b==0)
    return a;
    return GCDEuclid(b, a%b);

}
int main()
{
    for(long long int i =0 ;i <100;i++)
    {
        long long int a = rand() % 100;
        long long int b = rand() % 100;
        cout<<a <<" , "<<b<<" , "<<GCDEuclid(a,b)<<endl;
    }
    return 0;
}

// time complexity :O(log min(a,b))

/*
As seen above, x and y are results for inputs a and b,
   a.x + b.y = gcd                      ----(1)  

And x1 and y1 are results for inputs b%a and a
   (b%a).x1 + a.y1 = gcd   
                    
When we put b%a = (b - (⌊b/a⌋).a) in above, 
we get following. Note that ⌊b/a⌋ is floor(b/a)

   (b - (⌊b/a⌋).a).x1 + a.y1  = gcd

Above equation can also be written as below
   b.x1 + a.(y1 - (⌊b/a⌋).x1) = gcd      ---(2)

After comparing coefficients of 'a' and 'b' in (1) and 
(2), we get following
   x = y1 - ⌊b/a⌋ * x1
   y = x1

*/