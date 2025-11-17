class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int count=0;
        int i=0;
        int n;
        while(i<nums.size()){
            if(nums[i]==1){
                n=i;
                break;
            }
            i++;
        }
        for(int i=n+1;i<nums.size();i++){
            if(nums[i]==1){
                if(count<k)return false;
                count=0;
            }
            else{
                count++;
            }
        }
        return true;
    }
};