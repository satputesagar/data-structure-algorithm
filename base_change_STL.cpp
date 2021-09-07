#include<iostream>
#include<stdlib.h>
#include <iomanip>      // std::setbase
using namespace std;
int main(void)
{
    for(long long int i =0;i<10;i++)
    {
        long long int a = rand() % 100;
        cout<<a<<" : ";
        cout<<setbase(2)<<a<<" , ";
        cout<<setbase(4)<<a<<" , ";
        cout<<setbase(8)<<a<<" , ";
        cout<<setbase(16)<<a<<" , ";
        cout<<setbase(10)<<a<<endl;

    }

    return 0;
}