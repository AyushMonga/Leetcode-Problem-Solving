class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1;
        int start=-1,end=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]<target){
                s=mid+1;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            else{
                start=mid;
                e=mid-1;
            }
        }
        s=0,e=nums.size()-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]<target){
                s=mid+1;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            else{
                end=mid;
                s=mid+1;
            }
        }
        return {start,end};
    }
};