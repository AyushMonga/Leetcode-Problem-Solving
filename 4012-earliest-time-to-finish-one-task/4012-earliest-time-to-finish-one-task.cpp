class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int ans=INT_MAX;
        for(auto it:tasks){
            int sum=it[0]+it[1];
            ans=min(ans,sum);
        }
        return ans;
    }
};