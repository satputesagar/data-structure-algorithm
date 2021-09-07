#include<bits/stdc++.h>
using namespace std;

int  missNumber(int arr[],int n){
	int total=(n+1)*(n+2)/2;
	for(int i=0;i<n;i++)
		total-=arr[i];
return total;
}
int main()
{
	int arr[]={1,2,4,5,6};
	int n=5;
	int val=missNumber(arr,n);
	cout<<val<<endl;
	return 0;
}