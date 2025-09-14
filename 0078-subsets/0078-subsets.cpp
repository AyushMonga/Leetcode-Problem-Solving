class Solution {
public:
    void helper(int idx,vector<int>&nums,vector<int>&sub,vector<vector<int>>&ans){
        if(idx==nums.size()){
            ans.push_back(sub);
            return;
        }
        sub.push_back(nums[idx]);
        helper(idx+1,nums,sub,ans);
        sub.pop_back();
        helper(idx+1,nums,sub,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>sub;
        helper(0,nums,sub,ans);
        return ans;

    }
};