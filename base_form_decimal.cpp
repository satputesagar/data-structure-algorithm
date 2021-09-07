#include<iostream>
#include<stdlib.h>
using namespace std;
// converts form a decimal number n to  a number

long long int formDecial(long long int n, long long int b)
{
    long long int result = 0;
    long long int multiplier =1;
    while(n>0){
        result+= n % b *multiplier;
        multiplier *=10;
        n /=b;
    }
    return result;
}
int main()
{
    for (long long int i = 0; i < 100 ; i++)
    {
        long long int a = rand() % 100;
        cout<<a<<" : "<<formDecial(a,4)<<endl;
        
    }
    return 0;
}