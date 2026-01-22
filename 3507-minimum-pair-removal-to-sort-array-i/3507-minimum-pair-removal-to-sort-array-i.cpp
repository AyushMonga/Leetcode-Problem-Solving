class Solution {
public:
    int ans=0;
    int minimumPairRemoval(vector<int>& nums) {
        int index;
        if(is_sorted(nums.begin(),nums.end())){
            return ans;
        }
        int sum=INT_MAX;
        for(int i=0;i<nums.size()-1;i++){
            if(sum>nums[i]+nums[i+1]){
                index=i;
                sum=nums[i]+nums[i+1];
            }
        }
        nums[index]=sum;
        nums.erase(nums.begin()+index+1);
        ans++;
        return minimumPairRemoval(nums);
    }
};