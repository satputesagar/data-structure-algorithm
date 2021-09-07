#include<bits/stdc++.h>
using namespace std;

void NEGNSort(int arr[],int n){
	int j=0;
	for(int i=0;i<n;i++){
		 if(arr[i]<=0){
		 	if(i!=j)
		 	swap(arr[i],arr[j]);
		 j++;
		}
	}
}
void printArray(int arr[],int n){
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
cout<<endl;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
NEGNSort(arr,n);
printArray(arr,n);
return 0;

}