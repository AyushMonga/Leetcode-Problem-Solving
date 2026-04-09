class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>ans;
        int sol=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
                sol++;
            }
            else{
                ans.push_back(nums[i]);
            }
        }
        int n=nums.size();
        nums=ans;
        return n-sol;
    }
};