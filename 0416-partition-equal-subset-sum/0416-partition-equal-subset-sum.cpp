class Solution {
public:
    bool helper(int idx,int target,vector<int>&nums,vector<vector<int>>&dp){
        if(target==0)return true;
        if(idx==0)return nums[0]==target;
        if(dp[idx][target]!=-1)return dp[idx][target];
        bool nottaken=helper(idx-1,target,nums,dp);
        bool taken=false;
        if(nums[idx]<=target){
            taken=helper(idx-1,target-nums[idx],nums,dp);
        }
        return dp[idx][target]=taken||nottaken;
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        if(sum%2==1)return false;
        int k=sum/2;
        
        vector<vector<int>>dp(nums.size(),vector<int>(k+1,-1));
        return helper(nums.size()-1,k,nums,dp);
    }
};