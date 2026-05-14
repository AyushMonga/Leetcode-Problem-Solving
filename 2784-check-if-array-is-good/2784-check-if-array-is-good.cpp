class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==1)return false;
        int n=nums[nums.size()-1];
        int size=0;
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]==nums[i-1])return false;
        }
        return nums.size()==n+1;
    }
};