class Solution {
public:
    void helper(int idx,int k,vector<int>&nums,vector<int>&comb,vector<vector<int>>&ans){
        if(comb.size()==k){
            ans.push_back(comb);
            return;
        }
        if(idx>nums.size()-1)return;
    
        comb.push_back(nums[idx]);
        helper(idx+1,k,nums,comb,ans);
        comb.pop_back();
        helper(idx+1,k,nums,comb,ans);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>nums;
        for(int i=1;i<=n;i++){
            nums.push_back(i);
        }
        vector<int>comb;
        vector<vector<int>>ans;
        helper(0,k,nums,comb,ans);
        return ans;
    }
};