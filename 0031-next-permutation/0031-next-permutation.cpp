class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int breakpt=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                breakpt=i;
                break;
            }
        }
        if(breakpt==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int i=n-1;i>breakpt;i--){
            if(nums[i]>nums[breakpt]){
                swap(nums[i],nums[breakpt]);
                break;
            }
        }
        reverse(nums.begin()+breakpt+1,nums.end());
    }
};