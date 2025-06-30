class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int f=0;
        int s=1;
        int sum=nums[f]+nums[s];
        if(sum==target){
            return {f,s};
        }
        while(f<nums.size()-1){
            sum-=nums[s];
            if(s==nums.size()-1){
                sum-=nums[f];
                f++;
                s=f+1;
                sum+=nums[f];
            }
            else{
                s++;
            }
            sum+=nums[s];
            if(sum==target){
                return {f,s};
            }
        }
        return {0,0};
    }
};