class Solution {
public:
    void helper(int i,vector<int>&nums,vector<vector<int>>&ans,vector<int>subset){
        if(i==nums.size()){
            ans.push_back(subset);
            return;
        }
        subset.push_back(nums[i]);
        helper(i+1,nums,ans,subset);
        subset.pop_back();
        helper(i+1,nums,ans,subset);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>subset;
        helper(0,nums,ans,subset);
        return ans;
    }
};