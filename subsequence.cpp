#include<bits/stdc++.h>
using namespace std;

void SubSequences(int arr[],int N){
	//total number of possible non-empty sub-sequences
	unsigned int set_size=pow(2,N)-1; //subsequences TC O(N^2)

	for(int i =1;i<set_size;i++){
		//printing subsequence
		cout<<" [";
		for(int j=0;j<=set_size;j++)
		{
			if(i & (1<<j))  //sufting oparator << (1)
			{
				cout<<arr[j]<<",";
			}
		}
		cout<<"]"<<endl;
	}
}
int main(){
	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);

	SubSequences(arr,n);
	return 0;
}