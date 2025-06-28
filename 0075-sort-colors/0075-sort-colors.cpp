class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        vector<int>result(nums.size());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                result[left]=0;
                left++;
            }
            if(nums[i]==2){
                result[right]=2;
                right--;
            }
        }
        while(left<=right){
            result[left]=1;
            left++;
        }
        nums=result;
    }
};