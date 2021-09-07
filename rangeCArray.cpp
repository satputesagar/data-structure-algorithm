// Range: Difference between the maximum value and the minimum value in the distribution. 
// Coefficient of Range: (Max – Min) / (Max + Min).

#include<bits/stdc++.h>
using namespace std;

float minimum(float arr[],int n){
	float res=arr[0];
	for(int i =0;i<n;i++)
		res=min(res,arr[i]);

		return res;
}
float maximum(float arr[],int n){
float res=arr[0];
	for(int i =0;i<n;i++)
		res=max(res,arr[i]);

		return res;
}
float RangeCount(float arr[],int n){
	float range=(maximum(arr,n)-minimum(arr,n)) /(maximum(arr,n)+minimum(arr,n));
	return range;

}



int main()
{
	int n;
	cin>>n;
	float arr[n];
	for(int i =0;i<n;i++){
		cin>>arr[i];
	}
	cout<<float(RangeCount(arr,n));
	return 0;
}