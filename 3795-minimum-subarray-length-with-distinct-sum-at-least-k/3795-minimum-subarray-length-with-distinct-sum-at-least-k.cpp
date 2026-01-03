class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int l=0;
        int n=nums.size();
        int ans=n+1;
        for(int r=0;r<n;r++){
            int a=nums[r];
            mp[nums[r]]++;
            if(mp[a]==1){
                k-=a;
            }
            while(k<=0){
                ans=min(ans,r-l+1);
                mp[nums[l]]--;
                if(mp[nums[l]]==0){
                    k+=nums[l];
                }
                l++;
            }
        }
        if(ans>n){
            return -1;
        }
        return ans;
    }
};