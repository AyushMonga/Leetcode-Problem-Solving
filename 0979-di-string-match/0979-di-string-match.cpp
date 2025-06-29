class Solution {
public:
    vector<int> diStringMatch(string s) {
        int i=0;
        int d=s.size();
        vector<int>ans;
        for(int j=0;j<s.size();j++){
            if(s[j]=='I'){
                ans.push_back(i);
                i++;
            }
            else if(s[j]=='D'){
                ans.push_back(d);
                d--;
            }
        }
        if(s[s.size()-1]=='D'){
            ans.push_back(i);
        }
        else{
            ans.push_back(d);
        }
        return ans;
    }
};