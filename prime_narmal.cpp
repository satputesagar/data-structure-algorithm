#include<iostream>
#include<cmath>
using namespace std;
bool Isprime(long long int n)
{
    if(n<=1)
    return false;
    if(n<=2)
    return true;
    if(n %2 ==0)
    return false;
    long long int m = sqrt(n);
    for(long long int i =3 ;i<=m;i++)
        if(n%i==0)
        return false;
    return true;
}
int main()
{
    for(long long int i =1;i<=10;i++)
    {
        cout<<i<<"   "<<Isprime(i)<<endl;
    }
    return 0;
}