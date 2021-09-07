#include<bits/stdc++.h>
using namespace std;

int freqCountArray(int arr[],int k,int n){

	int count=0;
	for(int i=0;i<n;i++)
		if(arr[i]==k)
			count++;
	return count;
	
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i =0;i<n;i++){
		cin>>arr[i];
	}
	int k;
	cin>>k;

	cout<<k<<" : "<<freqCountArray(arr,k,n);

return 0;
}