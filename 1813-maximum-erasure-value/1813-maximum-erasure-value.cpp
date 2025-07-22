class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int, int> mp;
        int i = 0, j = 0;
        int maxSum = 0, currSum = 0;

        while (j < nums.size()) {
            currSum += nums[j];
            mp[nums[j]]++;

            while (mp[nums[j]] > 1) {
                mp[nums[i]]--;
                currSum -= nums[i];
                i++;
            }

            if (currSum > maxSum)
                maxSum = currSum;
            
            j++;
        }
        return maxSum;
    }
};
