class Solution {
public:
    void helper(int idx,vector<int>&sub,set<vector<int>>&st,vector<int>&nums){
        if(idx==nums.size()){
            st.insert(sub);
            return;
        }
        sub.push_back(nums[idx]);
        helper(idx+1,sub,st,nums);
        sub.pop_back();
        helper(idx+1,sub,st,nums);

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>>st;
        vector<int>sub;
        helper(0,sub,st,nums);
        vector<vector<int>>ans;
        set<vector<int>>at;
        for(auto it:st){
            sort(it.begin(),it.end());
            at.insert(it);
        }
        for(auto it:at){
            ans.push_back(it);
        }
        return ans;
    }
};