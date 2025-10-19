class Solution {
public:
    
    int longestBalanced(vector<int>& nums) {
        int ans=INT_MIN;
        for(int i=0;i<nums.size();i++){
            set<int>even;
            set<int>odd;
            for(int j=i;j<nums.size();j++){
                if(nums[j]%2==0)even.insert(nums[j]);
                else odd.insert(nums[j]);
                if(even.size()==odd.size())ans=max(ans,j-i+1);
            }
        }
        if(ans==INT_MIN)return 0;
        return ans;
    }
};