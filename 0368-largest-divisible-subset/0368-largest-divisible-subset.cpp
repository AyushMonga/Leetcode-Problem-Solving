class Solution {
public:
    int helper(vector<int>& nums, int n, int idx, int prev, vector<vector<int>>& dp, vector<vector<int>>& parent) {
        if (idx == n) {
            return 0;
        }

        if (dp[idx][prev + 1] != -1) {
            return dp[idx][prev + 1];
        }

        int nottake = helper(nums, n, idx + 1, prev, dp, parent);
        int take = 0;
        if (prev == -1 || (nums[idx] % nums[prev] == 0)) {
            take = 1 + helper(nums, n, idx + 1, idx, dp, parent);
        }

        if (take > nottake) {
            parent[idx][prev + 1] = idx;  
            dp[idx][prev + 1] = take;
        } else {
            parent[idx][prev + 1] = -1;   
            dp[idx][prev + 1] = nottake;
        }
        return dp[idx][prev + 1];
    }

    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
        vector<vector<int>> parent(n + 1, vector<int>(n + 1, -1));

        helper(nums, n, 0, -1, dp, parent);

        vector<int> ans;
        int prev = -1, idx = 0;

        while (idx < n) {
            if (parent[idx][prev + 1] != -1) {
                ans.push_back(nums[idx]);
                prev = idx;
                idx++;
            } else {
                idx++;
            }
        }

        return ans;
    }
};
