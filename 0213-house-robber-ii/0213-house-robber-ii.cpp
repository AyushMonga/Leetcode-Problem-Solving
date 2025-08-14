class Solution {
public:
    int helper1(int idx,vector<int>&nums,vector<int>&dp){
        if(idx==1){
            return nums[idx];
        }
        if(idx<1){
            return 0;
        }
        if(dp[idx]!=-1){
            return dp[idx];
        }
        if(dp[idx]==-1){
        int pick=nums[idx]+helper1(idx-2,nums,dp);
        int notpick=0+helper1(idx-1,nums,dp);
        dp[idx]=max(pick,notpick);
        }
        return dp[idx];
    }
    int helper2(int idx,vector<int>&nums,vector<int>&dp){
        if(idx==0){
            return nums[idx];
        }
        if(idx<0){
            return 0;
        }
        if(dp[idx]!=-1){
            return dp[idx];
        }
        if(dp[idx]==-1){
        int pick=nums[idx]+helper2(idx-2,nums,dp);
        int notpick=0+helper2(idx-1,nums,dp);
        dp[idx]=max(pick,notpick);
        }
        return dp[idx];
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        vector<int>dp1(nums.size()+1,-1);
        vector<int>dp2(nums.size()+1,-1);
            
        int a=helper1(nums.size()-1,nums,dp1);
        int b=helper2(nums.size()-2,nums,dp2);
        return max(a,b);
    }
};