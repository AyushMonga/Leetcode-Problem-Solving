class Solution {
public:
    // int helper(int idx, vector<int>&cost,vector<int>&dp){
    //     if(idx>=cost.size()){
    //         return 0;
    //     }
    //     if(dp[idx]!=-1)return dp[idx];
    //     int ones=helper(idx+1,cost,dp)+cost[idx];
    //     int twos=helper(idx+2,cost,dp)+cost[idx];
    //     return dp[idx]=min(ones,twos);
    // }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n+1);
        dp[0]=0;
        dp[1]=0;
        for(int i=2;i<=n;i++){
            int one=dp[i-1]+cost[i-1];
            int two=dp[i-2]+cost[i-2];
            dp[i]=min(one,two);
        }
        return dp[n];
    }
};