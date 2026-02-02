class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int one=nums[0];
        sort(nums.begin()+1,nums.end());
        return one+nums[1]+nums[2];
    }
};