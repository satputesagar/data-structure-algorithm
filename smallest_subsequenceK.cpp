#include<bits/stdc++.h>
using namespace std;




int LSmallestSubsequence(vector<int> arr,int k){
	//initialize priority queue
	priority_queue<int>pq;

	for(int i =0;i<arr.size();i++){
		pq.push(arr[i]);
	}
	int sum=0;
	int count=0;

	while(!pq.empty() && sum < k){
		sum+=pq.top();
		pq.pop();
		count++;
	}
	if(sum<k){
		return -1;
	}
	return count;
}
int main()
{
	vector<int>ar{2,3,1,5,6,3,7,9,14,10,2,5};
	int k=10;//sum 

	cout<<LSmallestSubsequence(ar,k);
	return 0;
}