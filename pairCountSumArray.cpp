#include<bits/stdc++.h>
using namespace std;

int CountSum(int arr[],int n ,int sum){
	int count=0;
	for(int i =0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]+arr[j]==sum){
				count++;
			}
		}
	}
	return count++;
}
int main()
{
	int arr[]={1,2,3,4,5};
	int sum=7;
	int n=sizeof(arr)/sizeof(arr[0]);
	int val=CountSum(arr,n,sum);
	cout<<val<<endl;
	return 0;
}