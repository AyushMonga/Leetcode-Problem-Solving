class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int n = nums.size();
        int validCount = 0;

        auto simulate = [&](int start, int direction) -> bool {
            vector<int> numsCopy = nums; 
            int curr = start;
            int dirSign = direction;

            while (curr >= 0 && curr < n) {
                if (numsCopy[curr] == 0) {
                    curr += dirSign; 
                } else {
                    numsCopy[curr]--; 
                    dirSign = -dirSign; 
                    curr += dirSign; 
                }
            }
            for (int num : numsCopy) {
                if (num != 0) return false;
            }
            return true;
        };
        for (int i = 0; i < n; ++i) {
            if (nums[i] == 0) {
                if (simulate(i, 1)) validCount++;    
                if (simulate(i, -1)) validCount++;   
            }
        }
        return validCount;
    }
};
