class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>arr=nums;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            if(mp[arr[i]]==0){
                mp[arr[i]]=i+1;
            }
        }
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            ans.push_back(mp[nums[i]]-1);
        }
        return ans;
    }
};