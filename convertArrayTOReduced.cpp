#include<bits/stdc++.h>
using namespace std;


void convert(int arr[],int n){
	int temp[n];
	memcpy(temp,arr,n*sizeof(int));

	//sorted temp array 
	sort(temp,temp+n);

	// create hashing table
	unordered_map<int,int>ump;


	int v=0;
	for(int i =0;i<n;i++)
		ump[temp[i]]=v++;

	// convert array by taking position form unordermap

	for(int i=0;i<n;i++)
		arr[i]=ump[arr[i]];
}

int main()
{
	int arr[]={10,30,20,40};
	int n=sizeof(arr)/sizeof(arr[0]);

	for(int i =0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	convert(arr,n);
	cout<<"Answer :"<<endl;
	for(int i =0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}