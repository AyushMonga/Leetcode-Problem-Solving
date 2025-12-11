class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0,right=nums.size()-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[left]==target){
                return left;
            }
            else{
                left++;
            }
            if(nums[right]==target){
                return right;
            }
            else{
                right--;
            }

        }
        return -1;
    }
};