class Solution {
public:
    bool checkOnesSegment(string s) {
        int check=0;
        string res=s;
        sort(res.begin(),res.end());
        reverse(res.begin(),res.end());
        if(res==s)return true;
        return false;
    }
};