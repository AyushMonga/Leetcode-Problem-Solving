class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int>mp;
        int l=0;
        int max=0;
        for(int r=0;r<s.size();r++){
            mp[s[r]]++;
            while (mp[s[r]] > 1) {
                mp[s[l]]--;
                l++;
            }
            if(r-l+1>max){
                max=r-l+1;
            }
        }
        return max;
    }
};