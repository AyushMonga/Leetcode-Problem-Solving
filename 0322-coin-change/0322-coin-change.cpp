class Solution {
public:
    int helper(int idx,int amount,vector<int>&coins,vector<vector<int>>&dp){
        if(amount==0){
            return 0;
        }
        if(dp[idx][amount]!=-1)return dp[idx][amount];
        if(idx==0){
            if(amount%coins[0]==0){
                return amount/coins[0];
            }
            else{
                return INT_MAX-1;
            }
        }
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
        if(amount==0){
            return 0;
        }
        vector<vector<int>>dp(coins.size(),vector<int>(amount+1,-1));
        int ans= helper(coins.size()-1,amount,coins,dp);
        if(ans==INT_MAX-1){
            return -1;
        }
        return ans;
    }
    // memoization;

    // int coinChange(vector<int>&coins,int amount){
    //     if(amount==0)return 0;
    //     vector<vector<int>>dp(coins.size(),vector<int>(amount+1,INT_MAX-1));
    //     for (int j = 0; j <= amount; j++) {
    //     if (j % coins[0] == 0) {
    //             dp[0][j] = j / coins[0];
    //        }
    //     }
        
    //     for(int i=1;i<coins.size();i++){
    //         for(int j=0;j<=amount;j++){
    //             int nottake=dp[i-1][j];
    //             int take=INT_MAX-1;
    //             int take1=INT_MAX-1;
    //             if(coins[i]<=j){
    //                 take=1+dp[i-1][j-1];
    //                 take1=1+dp[i][j-1];
    //             }
    //             dp[i][j]=min(nottake,min(take,take1));
    //         }
    //     }
    //     return dp[coins.size()-1][amount];
    // }
};