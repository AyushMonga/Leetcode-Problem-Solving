class Solution {
public:
    void helper(int idx, int target,vector<int>&sol,vector<vector<int>>&ans,vector<int>&candidates){
        if(idx==candidates.size() || target<0){
            return;
        }
        if(target==0){
            ans.push_back({sol});
            return;
        }
        sol.push_back(candidates[idx]);
        helper(idx+1,target-candidates[idx],sol,ans,candidates);
        helper(idx,target-candidates[idx],sol,ans,candidates);
        sol.pop_back();
        helper(idx+1,target,sol,ans,candidates);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>sol;
        vector<vector<int>>ans;
        int idx;
        
        helper(0,target,sol,ans,candidates);
        set<vector<int>>result;
        for(int i=0;i<ans.size();i++){
            result.insert(ans[i]);
        }
        vector<vector<int>>output;
        for(auto it:result){
            output.push_back(it);
        }
        return output;
    }
};