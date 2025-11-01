class Solution {
public:
    string lexSmallest(string s) {
        int n=s.size();
        string l=s;
        for(int k=0;k<n;k++){
            string a=s;
            reverse(a.begin()+k,a.end());
            l=min(a,l);
        }
        for(int k=0;k<n;k++){
            string a=s;
            reverse(a.begin(),a.end()-k);
            l=min(a,l);
        }
        return l;
    }
};