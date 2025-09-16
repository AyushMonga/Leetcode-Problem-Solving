class Solution {
public:
    int helper(int idx,int target,vector<int>&nums){
        if(idx<0){
            if(target==0){
                return 1;
            }
            else{
                return 0;
            }
        }
        int add=helper(idx-1,target+nums[idx],nums);
        int minus=helper(idx-1,target-nums[idx],nums);
        return add+minus;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return helper(nums.size()-1,target,nums);
    }
};