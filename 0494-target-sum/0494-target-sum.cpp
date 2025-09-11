class Solution {
public:
    int helper(int idx,vector<int>&nums,int target){
        if(idx>nums.size()-1){
            if(target==0){
                return 1;
            }
            else{
                return 0;
            }
        }
        int plus=helper(idx+1,nums,target-nums[idx]);
        int minus=helper(idx+1,nums,target+nums[idx]);
        return plus+minus;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return helper(0,nums,target);
    }
};