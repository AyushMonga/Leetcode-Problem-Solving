class Solution {
public:
    int dp(int i,int j,vector<int>&nums1,vector<int>&nums2,vector<vector<int>>&dpp){
        if(i==nums1.size()||j==nums2.size()){
            return INT_MIN;
        }
        if(dpp[i][j]!=-1){
            return dpp[i][j];
        }
        int ans=INT_MIN;
        ans=max(ans,nums1[i]*nums2[j]+max(0,dp(i+1,j+1,nums1,nums2,dpp)));
        ans=max(ans, dp(i+1,j,nums1,nums2,dpp));
        ans=max(ans,dp(i,j+1,nums1,nums2,dpp));
        return dpp[i][j]=ans;
    }
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>dpp(nums1.size(),vector<int>(nums2.size(),-1));
        return dp(0,0,nums1,nums2,dpp);
    }
};