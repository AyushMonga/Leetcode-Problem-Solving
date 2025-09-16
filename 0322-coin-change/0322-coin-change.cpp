class Solution {
public:
    int helper(int idx,int amount,vector<int>& coins,vector<vector<int>>&dp){
        if(idx==0){
            if(amount%coins[idx]==0){
                return amount/coins[idx];
            }
            else{
                return INT_MAX-1;
            }
        }
        if(amount==0){
            return 0;
        }
        if(dp[idx][amount]!=-1)return dp[idx][amount];
        int nottake=helper(idx-1,amount,coins,dp);
        int take=INT_MAX-1;
        int take1=INT_MAX-1;
        if(coins[idx]<=amount){
            take=1+helper(idx-1,amount-coins[idx],coins,dp);
            take1=1+helper(idx,amount-coins[idx],coins,dp);
        }
        return dp[idx][amount]=min(nottake,min(take,take1));
    }
    int coinChange(vector<int>& coins, int amount) {
        if(amount==0)return 0;
        vector<vector<int>>dp(coins.size(),vector<int>(amount+1,-1));
        int ans=helper(coins.size()-1,amount,coins,dp);
        if(ans==INT_MAX-1)return -1;
        return ans;
    }
};