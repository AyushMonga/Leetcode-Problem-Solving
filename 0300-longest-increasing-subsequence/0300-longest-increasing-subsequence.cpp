class Solution {
public:
    int helper(vector<int>&nums,int n,int idx,int prev,vector<vector<int>>&dp){
        if(idx==n)return 0;
        if(dp[idx][prev+1]!=-1)return dp[idx][prev+1];
        int nottake=helper(nums,n,idx+1,prev,dp);
        int take=0;
        if(prev==-1 || nums[idx]>nums[prev]){
            take=1+helper(nums,n,idx+1,idx,dp);
        }
        return dp[idx][prev+1]=max(take,nottake);
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return helper(nums,n,0,-1,dp);
    }
};