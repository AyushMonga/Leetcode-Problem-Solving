class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        vector<string>words;
        string word;
        while(ss>>word){
            words.push_back(word);
        }
        int i=0;
        int j=words.size()-1;
        while(i<j){
            swap(words[i],words[j]);
            i++;
            j--;
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