class Solution {
public:
    // int helper(int idx,vector<int>&nums,vector<int>&dp){
    //     if(idx==0){
    //         return nums[idx];
    //     }
    //     if(idx<0){
    //         return 0;
    //     }
    //     if(dp[idx]==-1){
    //     int pick=nums[idx]+helper(idx-2,nums,dp);
    //     int notpick=0+helper(idx-1,nums,dp);
    //     dp[idx]=max(pick,notpick);
    //     }
    //     return dp[idx];

    // }
    // int rob(vector<int>& nums) {
    //     int n=nums.size()-1;
    //     vector<int>dp(nums.size()+1,-1);
    //     return helper(n,nums,dp);        
    // }

    int rob(vector<int>&nums){
        vector<int>dp(nums.size());
        if(nums.size()==1){
            return nums[0];
        }
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);
        for(int i=2;i<nums.size();i++){
            int a=nums[i]+dp[i-2];
            int b=dp[i-1];
            dp[i]=max(a,b);
        }
        return dp[nums.size()-1];
    }

};