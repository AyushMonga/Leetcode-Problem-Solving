class Solution {
public:
    int helper(int idx,int amount,vector<int>& coins,vector<vector<int>>&dp){
        if(idx>=coins.size()|| amount<0){
            return 0;
        }
        if(dp[idx][amount]!=-1)return dp[idx][amount];
        if(idx==coins.size()-1 && amount-coins[coins.size()-1]==0){
            return 1;
        }
        if(amount==0){
            return 1;
        }
        int nottake=helper(idx+1,amount,coins,dp);
        int take=0;
        if(amount>=coins[idx])take=helper(idx,amount-coins[idx],coins,dp);
        return dp[idx][amount]=take+nottake;
    }
    int change(int amount, vector<int>& coins) {
        vector<vector<int>>dp(coins.size(),vector<int>(amount+1,-1));
        return helper(0,amount,coins,dp);
    }
};