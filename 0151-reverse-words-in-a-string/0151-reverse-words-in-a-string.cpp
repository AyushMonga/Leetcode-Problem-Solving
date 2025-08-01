class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string>words;
        while(ss>>word){
            words.push_back(word);
        }
        int i=0;
        int j=words.size()-1;
        while(i<=j){
            swap(words[i],words[j]);
            i++;
            j--;
        }
        string ans="";
        for(int i=0;i<words.size();i++){
            ans+=words[i];
            if(i!=words.size()-1){
                ans+=" ";
            }
        }
        return ans;
    }
};