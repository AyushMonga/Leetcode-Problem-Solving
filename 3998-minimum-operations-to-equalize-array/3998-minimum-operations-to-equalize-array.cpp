class Solution {
public:
    int minOperations(vector<int>& nums) {
        bool check=true;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                check=false;
            }
        }
        if(check==false)return 1;
        return 0;
    }
};