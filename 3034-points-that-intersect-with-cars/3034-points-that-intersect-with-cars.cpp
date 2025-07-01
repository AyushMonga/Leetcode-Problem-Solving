class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        unordered_map<int,int>mp;
        for(auto it:nums){
            mp[it[0]]++;
            mp[it[1]+1]--;
        }
        int sum=0;
        int ans=0;
        for(int i=1;i<102;i++){
            sum+=mp[i];
            if(sum>0){
                ans++;
            }
        }
        return ans;
    }
};