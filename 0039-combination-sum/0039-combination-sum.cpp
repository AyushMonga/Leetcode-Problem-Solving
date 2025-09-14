class Solution {
public:
    void helper(int idx,vector<int>&candidates,int target,vector<int>&sub,vector<vector<int>>&ans){
        if(target==0){
            ans.push_back(sub);
            return;
        }
        if(idx==candidates.size() || target<0){
            return;
        }
        sub.push_back(candidates[idx]);
        helper(idx+1,candidates,target-candidates[idx],sub,ans);
        helper(idx,candidates,target-candidates[idx],sub,ans);
        sub.pop_back();
        helper(idx+1,candidates,target,sub,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>sub;
        vector<vector<int>>ans;
        helper(0,candidates,target,sub,ans);
        set<vector<int>>st;
        for(auto it:ans){
            st.insert(it);
        }
        vector<vector<int>>result;
        for(auto it:st){
            result.push_back(it);
        }
        return result;
    }
};