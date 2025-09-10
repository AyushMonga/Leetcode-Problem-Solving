class Solution {
public:
    int helper(int idx, vector<int>&cost,vector<int>&dp){
        if(idx>=cost.size()){
            return 0;
        }
        if(dp[idx]!=-1)return dp[idx];
        int ones=helper(idx+1,cost,dp)+cost[idx];
        int twos=helper(idx+2,cost,dp)+cost[idx];
        return dp[idx]=min(ones,twos);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n+1,-1);
        int one=helper(0,cost,dp);
        int two=helper(1,cost,dp);
        return min(one,two);
    }
};