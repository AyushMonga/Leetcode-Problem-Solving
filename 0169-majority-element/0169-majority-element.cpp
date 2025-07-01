class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int max=INT_MIN;
        int ans;
        for(auto it:mp){
            if(max<it.second){
                max=it.second;
                ans=it.first;
            }
        }
        return ans;
    }
};