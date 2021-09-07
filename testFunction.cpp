#include<iostream>
#include<string>
#include<cstddef>//size_t
#include<bitset>//bitset  function test

using namespace std;
int main()
{
    bitset<5> num( string ("11010"));
    cout<<"num contain: \n";
    cout<<boolalpha;
    for(size_t i=0;i<num.size();++i)
    cout<<num.test(i)<<'\n'; //reverse number bool string showing
    
    return 0;
}