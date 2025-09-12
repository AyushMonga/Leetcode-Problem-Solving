class Solution {
public:
    void helper(int idx,vector<vector<int>>&ans,vector<int>&nums){
        if(idx==nums.size()-1){
            ans.push_back(nums);
        }
        for(int i=idx;i<nums.size();i++){
            swap(nums[idx],nums[i]);
            helper(idx+1,ans,nums);
            swap(nums[idx],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        helper(0,ans,nums);
        return ans;
    }
};