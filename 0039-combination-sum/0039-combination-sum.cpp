class Solution {
public:
    void helper(int idx,int target,vector<int>&candidates,vector<int>&path,vector<vector<int>>&ans){
        if(target==0){
            ans.push_back({path});
            return;
        }
        if(idx==candidates.size() || target<0){
            return;
        }
        path.push_back(candidates[idx]);
        helper(idx+1,target-candidates[idx],candidates,path,ans);
        helper(idx,target-candidates[idx],candidates,path,ans);
        path.pop_back();
        helper(idx+1,target,candidates,path,ans);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>path;
        helper(0,target,candidates,path,ans);
        set<vector<int>>st;
        for(int i=0;i<ans.size();i++){
            st.insert(ans[i]);
        }
        vector<vector<int>>res;
        for(auto it:st){
            res.push_back(it);
        }
        return res;
    }
};