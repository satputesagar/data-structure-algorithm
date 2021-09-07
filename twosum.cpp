#include<bits/stdc++.h>
using namespace std;

  vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                    break;
                }
            }
        }
        return {0,0}; 
    }

int main()
{
	int n;
	vector<int>nums;
 	for(int i =0;i<n;i++){
 		cin>>nums[i];
 	}
 	int target;
 	cin>>target;
 	for(int i =0;i<n;i++){
 		cout<<nums[i]<<" ";
 	}
 	cout<<target;
 	cout<<twoSum(nums,target);
 	return 0;
 	
 	// cout<<solve(arr[],target)<<endl;return 0;
}