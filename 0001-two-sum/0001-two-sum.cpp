class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // vector<int>ans;
        // for(int i=0;i<nums.size();i++){
        //     int diff=target-nums[i];
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[j]==diff){
        //             ans.push_back(i);
        //             ans.push_back(j);
        //             break;
        //         }
        //     }
        // }
        // return ans;
        // brute force;
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(mp.find(target-nums[i])!=mp.end()){
                ans.push_back(mp[target-nums[i]]);
                ans.push_back(i);
            }
            mp[nums[i]]=i;
                    
        }
        return ans;
    }
};