class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int a=nums[0];
        int count=1;
        int ans=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==a){
                count++;
                if(count>2){
                    ans++;
                    nums[i]=INT_MAX;
                }
            }
            else{
                a=nums[i];
                count=1;
            }
        }
        sort(nums.begin(),nums.end());
        return nums.size()-ans;
    }
};