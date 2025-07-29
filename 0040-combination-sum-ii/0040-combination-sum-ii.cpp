#include <vector>
#include <algorithm>
#include <set>

using namespace std;

class Solution {
public:
    void helper(int idx, int target, vector<int>& candidates, vector<int>& sub, vector<vector<int>>& ans) {
        if (target < 0) {
            return;
        }
        if(idx==candidates.size()){
            if(target==0){
                ans.push_back(sub);
                return;
            }
        }
        if (target == 0) {
            ans.push_back(sub);
            return;
        }
        for (int i = idx; i < candidates.size(); ++i) {
            if (i > idx && candidates[i] == candidates[i - 1]) {
                continue; // skip duplicates
            }
            sub.push_back(candidates[i]);
            helper(i + 1, target - candidates[i], candidates, sub, ans);
            sub.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> sub;
        sort(candidates.begin(), candidates.end());
        helper(0, target, candidates, sub, ans);
        return ans;
    }
};