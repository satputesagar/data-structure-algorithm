#include<bits/stdc++.h>
using namespace std;

bool findKey(int arr[],int x,int k,int n)
{
	int i;
	for(i=0;i<n;i=i+k)
	{
		//search of segment start
		int j;
		for(j=0;j<k;j++)
		{
			if(arr[i+j]==x)
			{
				break;
			}
		}

			if(j==k)
			{
				return false;
			}

	}
//  if n is a multiple of k
	if(i==n)
	{
	return true;
	}
	int j;
	for(j=i-k;j<n;j++){
		if(arr[j]==x)
			break;
	}
	if(j==n){
		return false;
	}
	return true;
}


int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i =0;i<n;i++)
	{
		cin>>arr[i];
	}
	int key;
	cin>>key;
	int segment;
	cin>>segment;

	if(findKey(arr,segment,key,n))
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}


return 0;
}