class Solution {
public:
    int helper(int idx,vector<int>&nums,vector<int>&dp){
        if(idx==0){
            return 0;
        }
        if(idx==1){
            return nums[0];
        }
        if(dp[idx]!=-1)return dp[idx];
        int opt1=nums[idx-1]+helper(idx-2,nums,dp);
        int opt2=helper(idx-1,nums,dp);
        return dp[idx]=max(opt1,opt2);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
        return helper(n,nums,dp);

    }
};