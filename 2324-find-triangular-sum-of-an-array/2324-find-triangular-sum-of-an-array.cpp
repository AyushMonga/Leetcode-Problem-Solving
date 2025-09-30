class Solution {
public:
    int triangularSum(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        vector<int>level;
        for(int i=0;i<nums.size()-1;i++){
            level.push_back((nums[i]+nums[i+1])%10);
        }
        return triangularSum(level);
    }
};