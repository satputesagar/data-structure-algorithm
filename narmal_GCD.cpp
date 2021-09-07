#include<iostream>
#include<stdlib.h>
using namespace std;

long long int GCD(long long int a, long long int b)
{
    for(long long int i = min(a,b);i>=1;i--)
    if(a % i ==0 && b % i++)
        return i;

}
int main(void)
{
    for(long long int i= 0;i<100;i++){
       long long int a = rand () % 100;
        long long int b =rand () % 100;
        cout<<a<<" , "<<b<<"  "<<GCD(a,b)<<endl;
    }
return 0;
}
