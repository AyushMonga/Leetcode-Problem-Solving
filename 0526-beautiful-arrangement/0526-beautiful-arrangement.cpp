class Solution {
public:
    // bool check(vector<int>&arr){
    //     for(int i=0;i<arr.size();i++){
    //       if(  arr[i]%(i+1)!=0 && (i+1)%arr[i]!=0)return false;
    //     }
    //     return true;
    // }
    void helper(int idx,vector<int>&nums,int& count){
        if(idx==nums.size()){
            count++;
            return;
        }
        for(int i=idx;i<nums.size();i++){
            if(nums[i]%(idx+1)==0 || (idx+1)%nums[i]==0){
            swap(nums[idx],nums[i]);
            helper(idx+1,nums,count);
            swap(nums[idx],nums[i]);
            }
        }
    }
    int countArrangement(int n) {
        vector<int>nums;
        int count=0;
        for(int i=1;i<=n;i++){
            nums.push_back(i);
        }
        helper(0,nums,count);
    
        return count;
    }
};