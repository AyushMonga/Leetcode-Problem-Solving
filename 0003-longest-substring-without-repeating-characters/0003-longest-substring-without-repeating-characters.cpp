class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int l=0;
        int ans=INT_MIN;
        if(s.size()==0)return 0;
        for(int r=0;r<s.size();r++){
            mp[s[r]]++;
            if(r-l+1==mp.size()){
                if(r-l+1>ans){
                    ans=r-l+1;
                }
            }
            else{
            while(r-l+1!=mp.size()){
                mp[s[l]]--;
                if(mp[s[l]]==0){
                    mp.erase(s[l]);
                }
                l++;
            }
            }
        }
        return ans;
    }
};