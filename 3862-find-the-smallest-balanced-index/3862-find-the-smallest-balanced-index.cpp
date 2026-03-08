class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return -1;
        vector<long long> sum(n, 0);
        vector<long long> prod(n, 1);        
        for (int i = 1; i < n; i++) {
            sum[i] = sum[i-1] + nums[i-1];
        }        
        for (int i = n-2; i >= 0; i--) {
            if (prod[i+1] > LLONG_MAX / nums[i+1]) {
                prod[i] = LLONG_MAX; 
            } else {
                prod[i] = prod[i+1] * nums[i+1];
            }
        }        
        for (int i = 0; i < n; i++) {
            if (sum[i] == prod[i]) return i;
        }
        return -1;
    }
};