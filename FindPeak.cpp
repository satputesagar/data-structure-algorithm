// FindPeak.cpp
#include<bits/stdc++.h>
using namespace std;

int FindPeak(int arr[],int low,int high,int n){

	int mid=low+(high-low)/2;

	if((mid==0 || arr[mid-1] <= arr[mid]) && (mid==n-1 || arr[mid+1] <= arr[mid]))
	{
		return mid;
	}
	else if(mid>0 && arr[mid-1]>arr[mid])
	{
		return FindPeak(arr,low,mid-1,n);
	}
	else
	{
		return FindPeak(arr,mid+1,high,n);
	}
}

int main()
{
	int arr[]={1,2,1,2,6,3,5,3,1};
	int n=6;

	cout<<"find FindPeak element index is : "<<FindPeak(arr,0,n-1,n);
	return 0;
}