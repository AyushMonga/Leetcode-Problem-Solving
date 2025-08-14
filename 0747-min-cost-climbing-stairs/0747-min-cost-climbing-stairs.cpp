class Solution {
public:
    // int helper(int idx,vector<int>&cost){
    //     if(idx>=cost.size()){
    //         return 0;
    //     }    
    //     int left=helper(idx+1,cost)+cost[idx];
    //     int right=helper(idx+2,cost)+cost[idx];
    //     return min(left,right);
    // }
    // int minCostClimbingStairs(vector<int>& cost) {
    //     int a=helper(0,cost);
    //     int b=helper(1,cost);
    //     return min(a,b);
    // }
    //recursion TLE;

    // int helper(int idx,vector<int>&cost,vector<int>&dp){
    //     if(idx>=cost.size()){
    //         return 0;
    //     }
    //     if(dp[idx]!=-1){
    //         return dp[idx];
    //     }
    //     int left=helper(idx+1,cost,dp)+cost[idx];
    //     int right=helper(idx+2,cost,dp)+cost[idx];
    //     dp[idx]=min(left,right);
    //     return dp[idx];
    // }
    // int minCostClimbingStairs(vector<int>&cost){
    //     vector<int>dp(cost.size(),-1);
    //     int a=helper(0,cost,dp);
    //     int b=helper(1,cost,dp);
    //     return min(a,b);
    // }
    //Memoizatiion works

    int minCostClimbingStairs(vector<int>&cost){
        vector<int>dp(cost.size()+1);
        dp[0]=0;
        dp[1]=0;
        for(int i=2;i<=cost.size();i++){
            int opt1=dp[i-1]+cost[i-1];
            int opt2=dp[i-2]+cost[i-2];
            dp[i]=min(opt1,opt2);
        }
        return dp[cost.size()];
    }
};