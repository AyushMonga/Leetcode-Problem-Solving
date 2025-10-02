class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int>original=nums;
        sort(nums.rbegin(),nums.rend());
        unordered_map<int,int>mp;
        for(int i=0;i<k;i++){
            mp[nums[i]]++;
        }
        vector<int>ans;
        for(int i=0;i<original.size();i++){
            if(ans.size()==k)break;
            if(mp.find(original[i])!=mp.end() && mp[original[i]]>0){
                ans.push_back(original[i]);
                mp[original[i]]--;
                if(mp[original[i]]==0){
                    mp.erase(original[i]);
                }
            }
        }
        return ans;
    }
};