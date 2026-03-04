class Solution {
public:
    int vowelConsonantScore(string s) {
        int vowel =0;
        int consonant=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                vowel++;
            }
            else if(s[i]>=97 && s[i]<=122 ){
                consonant++;
            }
        }
        if(consonant==0)return 0;
        int ans=vowel/consonant;
        return ans;
    }
};