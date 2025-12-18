class Solution {
public:
    int vowel(string word){
        int count=0;
        for(int i=0;i<word.size();i++){
            if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'){
                count++;
            }
        }
        return count;
    }
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string>words;
        while(ss>>word){
            words.push_back(word);
        }
        int count=vowel(words[0]);
        for(int i=1;i<words.size();i++){
            int a=vowel(words[i]);
            if(a==count){
                reverse(words[i].begin(),words[i].end());
            }
        }
        string ans="";
        for(int i=0;i<words.size()-1;i++){
            ans+=words[i];
            ans+=" ";
        }
        ans+=words[words.size()-1];
        return ans;
    }
};