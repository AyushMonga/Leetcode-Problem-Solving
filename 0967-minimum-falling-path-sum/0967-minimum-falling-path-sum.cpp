class Solution {
public:
    // int helper(int i,int j, vector<vector<int>>&matrix,vector<vector<int>>&dp){
    //     int n=matrix.size();
    //     int m=matrix[0].size();
        
    //     if(j<0 || j>=m){
    //         return 1e9;
    //     }
    //     if(dp[i][j]!=-1){
    //         return dp[i][j];
    //     }
    //     if(i==0){
    //         return matrix[0][j];
    //     }
    //     int up=matrix[i][j]+helper(i-1,j,matrix,dp);
    //     int ld=matrix[i][j]+helper(i-1,j-1,matrix,dp);
    //     int rd=matrix[i][j]+helper(i-1,j+1,matrix,dp);
    //     return dp[i][j]=min(up,min(ld,rd));

    // }
    // int minFallingPathSum(vector<vector<int>>& matrix) {
    //     int n=matrix.size();
    //     int m=matrix[0].size();
    //     int mini=INT_MAX;
    //     vector<vector<int>>dp(n,vector<int>(m,-1));
    //     for(int j=0;j<m;j++){
    //         int a=helper(n-1,j,matrix,dp);
    //         if(a<mini){
    //             mini=a;
    //         }
    //     }
    //     return mini;
    // }
    //memoization TLE;

    int minFallingPathSum(vector<vector<int>>&matrix){
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>dp(n,vector<int>(m));
        for(int j=0;j<n;j++){
            dp[0][j]=matrix[0][j];
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                int up=matrix[i][j]+dp[i-1][j];
                int ld=1e9;
                if(j-1>=0)ld=matrix[i][j]+dp[i-1][j-1];
                int rd=1e9;
                if(j+1<m)rd=matrix[i][j]+dp[i-1][j+1];
                dp[i][j]=min(up,min(ld,rd));
            }
        }
        int mini=1e9;
        for(int j=0;j<m;j++){
            mini=min(mini,dp[n-1][j]);
        }
        return mini;
    }
};