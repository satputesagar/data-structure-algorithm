#include<bits/stdc++.h>
using namespace std;
//climit ->INT_MIN and INT_MAX 
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int maxNo=INT_MIN;
	int minNo=INT_MAX;
	for(int i =0;i<n;i++){
	minNo= min(minNo,arr[i]);
	maxNo=max(maxNo,arr[i]);
}
	cout<<maxNo<<" "<<minNo<<endl;
	return 0;
}