class Solution {
public:
    string sortVowels(string s) {
        priority_queue<char,vector<char>,greater<char>>q;
        for(int i=0;i<s.size();i++){
            char c=tolower(s[i]);
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
                q.push(s[i]);
            }
        }
        string ans;
        for(int i=0;i<s.size();i++){
        char c=tolower(s[i]);
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
                ans.push_back(q.top());
                q.pop();
            }
            else{
                ans.push_back(s[i]);
            }
         
        }
        return ans;
    }
};