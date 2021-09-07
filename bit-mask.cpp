#include<bits/stdc++.h>
using namespace std;
int atob(int c){
	int count=0;
	while(c>0){
		c=c&(c-1);

		count++;
	}
	return count++;
}


int main()
{
	int a=21;
	int b=37;
	int c=(a^b);
	cout<<atob(c)<<endl;
	return 0;
}
