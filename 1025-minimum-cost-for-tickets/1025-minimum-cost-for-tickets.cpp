class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n = days.size();
        vector<int> dp(n, 0);
        dp[0] = min({costs[0], costs[1], costs[2]});

        for (int i = 1; i < n; ++i) {
            // Option 1: Buy 1-day pass
            int opt1 = dp[i-1] + costs[0];

            // Option 2: Buy 7-day pass, find the first day not covered by this pass
            int j = i - 1;
            while (j >= 0 && days[j] > days[i] - 7) {
                --j;
            }
            int opt2 = (j >= 0) ? dp[j] + costs[1] : costs[1];

            // Option 3: Buy 30-day pass, find the first day not covered by this pass
            j = i - 1;
            while (j >= 0 && days[j] > days[i] - 30) {
                --j;
            }
            int opt3 = (j >= 0) ? dp[j] + costs[2] : costs[2];

            dp[i] = min({opt1, opt2, opt3});
        }

        return dp[n-1];
    }
};