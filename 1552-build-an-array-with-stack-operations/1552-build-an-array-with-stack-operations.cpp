class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        unordered_map<int,int>mp;
        vector<string>ans;
        vector<int>duplicate;
        for(int i=0;i<target.size();i++){
            mp[target[i]]++;
        }
        for(int i=1;i<=n;i++){
            if(duplicate==target){
                break;
            }
            if(mp[i]==0){
                ans.push_back("Push");
                ans.push_back("Pop");
            }
            else{
                duplicate.push_back(i);
                ans.push_back("Push");
            }
        }
        return ans;
    }
};