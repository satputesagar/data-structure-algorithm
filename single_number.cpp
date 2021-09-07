/*
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

Follow up: Could you implement a solution with a linear runtime complexity and without using extra memory?

 

Example 1:

Input: nums = [2,2,1]
Output: 1
Example 2:

Input: nums = [4,1,2,1,2]
Output: 4

*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int s = 0, e = nums.size();
        while (e - s > 1) {
            swap(nums[s], nums[rand()%(e-s) + s]);
            int lower = s+1;
            for (int i = s+1; i < e; i++) {
                if (nums[i] < nums[s]) {
                    swap(nums[i], nums[lower++]);
                } else if (nums[i] == nums[s]) {
                    swap(nums[i], nums[lower]);
                    swap(nums[s+1], nums[lower++]);
                }
            }
            if (nums[s] != nums[s+1]) return nums[s];
            if ((lower - s) % 2) {
                s += 2; e = lower;
            } else {
                s = lower;
            }
        }
        return nums[s];
    }
};