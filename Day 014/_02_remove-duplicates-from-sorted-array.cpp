// Problem Link : https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> temp;
        temp.push_back(nums[0]);
        for(int i=1; i<nums.size(); i++){
            if(nums[i]!=nums[i-1]) temp.push_back(nums[i]);
        }
        nums = temp;
        return temp.size();
    }
};