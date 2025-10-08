class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        for(auto n:nums1){
            mp1[n]++;
        }
        for(auto n:nums2){
            mp2[n]++;
        }
        vector<vector<int>>ans(2);
        for(int i=0;i<nums1.size();i++){
            if(mp2[nums1[i]]==0){
                ans[0].push_back(nums1[i]);
                mp2[nums1[i]]--;
            }
        }
        for(int i=0;i<nums2.size();i++){
            if(mp1[nums2[i]]==0){
                ans[1].push_back(nums2[i]);
                mp1[nums2[i]]--;
            }
        }
        return ans;
    }
};