class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        if(nums.size()==1){
            return 0;
        }
        if(nums.size()==k){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int a=0;
        int b=0;
        for(int i=0;i<k;i++){
            a+=nums[i];
        }
        for(int i=nums.size()-1;i>nums.size()-k-1;i--){
            b+=nums[i];
        }
        return abs(a-b);
    }
};