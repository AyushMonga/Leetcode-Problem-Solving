class Solution {
public:
    int mirrorDistance(int n) {
        string str=to_string(n);
        reverse(str.begin(),str.end());
        string reverse=str;
        int r=stoi(reverse);
        return abs(n-r);
    }
};