class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int maxv=0;
        int maxc=0;
        for(auto it:mp){
            if(it.first=='a'||it.first=='e'||it.first=='i'||it.first=='o'||it.first=='u'){
                if(maxv<it.second){
                    maxv=it.second;
                }
            }
            else{
                if(it.second>maxc){
                    maxc=it.second;
                }
            }
        }
        return maxc + maxv;
    }
};