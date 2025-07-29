class Solution {
public:
    void helper(int i,vector<int>&nums,set<vector<int>>&ans,vector<int>&subset){
        if(i==nums.size()){
            ans.insert(subset);
            return;
        }
        subset.push_back(nums[i]);
        helper(i+1,nums,ans,subset);
        subset.pop_back();
        helper(i+1,nums,ans,subset);

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>>ans;
        vector<int>subset;
        vector<vector<int>>sol;
        helper(0,nums,ans,subset);
        set<vector<int>>st;
        for(auto it:ans){
            sort(it.begin(),it.end());
            st.insert(it);
        }
        for(auto it:st){
            sol.push_back(it);
        }
        return sol;
    }
};