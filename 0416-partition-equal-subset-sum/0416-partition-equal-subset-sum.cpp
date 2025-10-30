class Solution {
public:
    // bool helper(int idx,int target,vector<int>&nums,vector<vector<int>>&dp){
    //     if(target==0)return true;
    //     if(idx==0)return nums[0]==target;
    //     if(dp[idx][target]!=-1)return dp[idx][target];
    //     bool not_taken=helper(idx-1,target,nums,dp);
    //     bool taken=false;
    //     if(nums[idx]<=target){
    //         taken=helper(idx-1,target-nums[idx],nums,dp);
    //     }
    //     return dp[idx][target]=taken|not_taken;
    // }
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        if(sum%2!=0)return false;
        int target=sum/2;
        vector<vector<bool>>dp(n,vector<bool>(target+1,false));
        for(int i=0;i<n;i++){
            dp[i][0]=true;
        }
        if(nums[0]<=target)dp[0][nums[0]]=true;
        for(int idx=1;idx<n;idx++){
            for(int t=1;t<=target;t++){
                bool not_taken=dp[idx-1][t];
                bool taken=false;
                if(nums[idx]<=t){
                    taken=dp[idx-1][t-nums[idx]];
                }
                dp[idx][t]=not_taken||taken;
            }
        }
        return dp[n-1][target];
    }
};