/*
bit set 

a  bit set store bits (element with only two possible value :  0,1,and true,false).

The classs emulates an array of bool elements , but optimized  of space allocation , generally, each element occupies only
one bit (which on most system , is either times less than the smallest elemental type:char).
*/
//bitset ::all
#include<iostream>
#include<bitset>
using namespace std;
int main()
{
    bitset<8> foo;
    cout<<"plese ,enter an *- bit binary number : ";
    cin>>foo;
    cout<<boolalpha<<endl;
    cout<<"all : "<<foo.all()<<endl;
    cout<<"any :"<<foo.any()<<endl;
   
    cout<<" none  : "<<foo.none()<<endl;
   cout<<"count : "<<foo.count()<<endl;
   //cout<<"test : "<<foo.test
    return 0;
}