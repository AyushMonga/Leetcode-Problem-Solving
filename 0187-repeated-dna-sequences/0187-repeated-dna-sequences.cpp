class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int>mp;
        string ans="";
        vector<string> output;
        for(int i=0;i<s.length();i++){
            if(i>9){
                mp[ans]++;
                ans.erase(ans.begin());
            }
            ans+=s[i];
        }
        if(ans.size()==10)mp[ans]++;
        for(auto it:mp){
            if(it.second>1){
                output.push_back(it.first);
            }
        }
        return output;
        

    }
};