class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int min=0;
        int max=abs(nums[2]-nums[nums.size()-1]);
        int opt1= max-min;
        max=abs(nums[nums.size()-3]-nums[0]);
        int opt2= max-min;
        int opt3=nums[nums.size()-2]-nums[1];
        int ans;
        if(opt1<opt2 && opt1<opt3){
            ans=opt1;
        }
        else if(opt2<opt3){
            ans=opt2;
        }
        else{
            ans=opt3;
        }
        return ans;
    }
};