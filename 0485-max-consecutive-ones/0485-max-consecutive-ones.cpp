class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=0;
        int ones=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                ones++;
                maxi=max(maxi,ones);
            }
            else{
                ones=0;
            }
        }
        return maxi;
    }
};