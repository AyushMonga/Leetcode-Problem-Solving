class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int i1=0;
        int i2=0;
        int ch=0;
        while(i1<word1.size() && i2<word2.size()){
            if(ch==0){
                ans.push_back(word1[i1]);
                i1++;
                ch=1;
            }
            else{
                ans.push_back(word2[i2]);
                i2++;
                ch=0;
            }
        }
        if(i1<word1.size()){
            ans+=word1.substr(i1);
        }
        if(i2<word2.size()){
            ans+=word2.substr(i2);
        }
        return ans;
    }
};