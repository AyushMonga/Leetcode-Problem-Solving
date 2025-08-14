class Solution {
public:
    int helper(int idx,vector<int>&nums,vector<int>&dp){
        if(idx==0){
            return nums[idx];
        }
        if(idx<0){
            return 0;
        }
        if(dp[idx]==-1){
        int pick=nums[idx]+helper(idx-2,nums,dp);
        int notpick=0+helper(idx-1,nums,dp);
        dp[idx]=max(pick,notpick);
        }
        return dp[idx];

    }
    int rob(vector<int>& nums) {
        int n=nums.size()-1;
        vector<int>dp(nums.size()+1,-1);
        return helper(n,nums,dp);        
    }


};