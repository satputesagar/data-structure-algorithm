/*
Input: nums = [8,1,2,2,3]
Output: [4,0,1,1,3]
Explanation: 
For nums[0]=8 there exist four smaller numbers than it (1, 2, 2 and 3). 
For nums[1]=1 does not exist any smaller number than it.
For nums[2]=2 there exist one smaller number than it (1). 
For nums[3]=2 there exist one smaller number than it (1). 
For nums[4]=3 there exist three smaller numbers than it (1, 2 and 2).


*/




class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
       int n=nums.size();
vector a(n,0); //int type vector
unordered_map<int,int>mp;
vector test(nums); //another temporary vector
sort(test.begin(),test.end());
for(int i=0;i<n;i++){
mp.insert({test[i],i});
}
for(int i=0;i<n;i++){
if(mp.find(nums[i])!=mp.end()){
a[i]=mp[nums[i]];
}
}

    return a;
}
};