class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pre=1;
        int suf=1;
        int ans=INT_MIN;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            if(pre==0)pre=1;
            if(suf==0)suf=1;
            pre*=nums[i];
            suf*=nums[n-1-i];
            ans=max(ans,max(pre,suf));
        }
        return ans;
    }
};