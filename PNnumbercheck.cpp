#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int temp=n-m;

	if(temp<0){
		temp=temp*(-1);
	}
	cout<<temp<<endl;
	return 0;
}