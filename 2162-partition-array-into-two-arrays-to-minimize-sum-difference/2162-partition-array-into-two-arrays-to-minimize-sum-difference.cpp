class Solution {
public:
    int minimumDifference(vector<int>& nums) {
        int totalSize = nums.size();
        int n = totalSize / 2;

        vector<int> left(nums.begin(), nums.begin() + n);
        vector<int> right(nums.begin() + n, nums.end());

        unordered_map<int, vector<int>> leftSums;
        unordered_map<int, vector<int>> rightSums;

        generateSubsets(left, leftSums);

        generateSubsets(right, rightSums);

        for (auto &p : rightSums) {
            sort(p.second.begin(), p.second.end());
        }

        int sumAll = 0;
        for ( int v : nums) sumAll += v;

        int minDiff = INT_MAX;

        for (int count = 0; count <= n; count++) {
            for (int sumLeft : leftSums[count]) {
                int restCount = n - count;
                if (rightSums.find(restCount) == rightSums.end()) continue;

                int target = sumAll / 2 - sumLeft;

                auto &vec = rightSums[restCount];
                auto it = lower_bound(vec.begin(), vec.end(), target);

                if (it != vec.end()) {
                    int sumRight = *it;
                    int totalSubsetSum = sumLeft + sumRight;
                    int otherSum = sumAll - totalSubsetSum;
                    minDiff = min(minDiff, abs(totalSubsetSum - otherSum));
                }
                if (it != vec.begin()) {
                    --it;
                    int sumRight = *it;
                    int totalSubsetSum = sumLeft + sumRight;
                    int otherSum = sumAll - totalSubsetSum;
                    minDiff = min(minDiff, abs(totalSubsetSum - otherSum));
                }
            }
        }
        return minDiff;
    }

private:
    void generateSubsets(const vector<int> &nums, unordered_map<int, vector<int>> &countSumMap) {
        int size = nums.size();
        for (int mask = 0; mask < (1 << size); mask++) {
            int subsetSum = 0, count = 0;
            for (int i = 0; i < size; i++) {
                if (mask & (1 << i)) {
                    subsetSum += nums[i];
                    count++;
                }
            }
            countSumMap[count].push_back(subsetSum);
        }
    }
};
