//find minimum and maximum element in array 
#include<bits/stdc++.h>
using namespace std;
//function minimum
int minimum(int arr[],int n){
 int res=arr[0];
 for(int i=0;i<n;i++){
 	res=min(res,arr[i]);
 }
 return res;
}
//function maximum
int maximum(int arr[],int n){
	int res=arr[0];
	for(int i=0;i<n;i++){
		res=max(res,arr[i]);
	}
	return res;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<< "minimum Number in array: "<<minimum(arr,n);
	cout<<endl;
	cout<<"maximum Number in array : "<<maximum(arr,n);
return 0;
}