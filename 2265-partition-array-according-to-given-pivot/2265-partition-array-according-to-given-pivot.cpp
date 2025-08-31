class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>ans(nums.size(),INT_MIN);
        int low=0;
        int high=nums.size()-1;
        for(int i=0,j=nums.size()-1;i<nums.size();i++,j--){
            if(nums[i]<pivot){
                ans[low]=nums[i];
                low++;
            }
            if(nums[j]>pivot){
                ans[high]=nums[j];
                high--;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(ans[i]==INT_MIN){
                ans[i]=pivot;
            }
        }
        return ans;
    }
};