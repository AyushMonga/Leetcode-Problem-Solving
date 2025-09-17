class Solution {
public:
    // bool helper(int idx1,int idx2,string s,string p,vector<vector<int>>&dp){
    //     if(idx1==0 && idx2==0)return true;
    //     if(idx2==0 && idx1>0)return false;
    //     if(idx1==0 && idx2>0){
    //         while(idx2>0){
    //             if(p[idx2-1]!='*')return false;
    //             idx2--;
    //         }
    //         return true;
    //     }
    //     if(dp[idx1][idx2]!=-1)return dp[idx1][idx2];
    //     if(s[idx1-1]==p[idx2-1] || p[idx2-1]=='?'){
    //         return dp[idx1][idx2]=helper(idx1-1,idx2-1,s,p,dp);
    //     }
    //     if(p[idx2-1]=='*'){
    //         return dp[idx1][idx2]=helper(idx1-1,idx2,s,p,dp) || helper(idx1,idx2-1,s,p,dp);
    //     }
    //     return false;
    // }
    bool isMatch(string s, string p) {
        int n=s.size();
        int m=p.size();
        vector<vector<bool>>dp(n+1,vector<bool>(m+1,false));
        dp[0][0]=true;
        for(int i=1;i<=n;i++){
            dp[i][0]=false;
        }
        for(int j=1;j<=m;j++){
            if(p[j-1]=='*')dp[0][j]=dp[0][j-1];
            else dp[0][j]=false;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s[i-1]==p[j-1] || p[j-1]=='?'){
                    dp[i][j]=dp[i-1][j-1];
                }
                else if(p[j-1]=='*'){
                    dp[i][j]=dp[i-1][j]||dp[i][j-1];
                }
                else{
                    dp[i][j]=false;
                }
            }
        }
        return dp[n][m];
    }
};