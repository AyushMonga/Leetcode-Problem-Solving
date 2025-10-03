class Solution {
public:
    string reverseVowels(string s) {
        string vowel;
        for(int i=0;i<s.size();i++){
            if(tolower(s[i])=='a'||tolower(s[i])=='e'||tolower(s[i])=='i'||tolower(s[i])=='o'||tolower(s[i])=='u'){
                vowel.push_back(s[i]);
            }
        }
        reverse(vowel.begin(),vowel.end());
        int j=0;
        for(int i=0;i<s.size();i++){
            if(tolower(s[i])=='a'||tolower(s[i])=='e'||tolower(s[i])=='i'||tolower(s[i])=='o'||tolower(s[i])=='u'){
                s[i]=vowel[j];
                j++;
            }
        }
        return s;
    }
};