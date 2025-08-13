class Solution {
public:
    // void helper(int idx,string &s,vector<string>&ans){
    //     if(idx==s.length()){
    //         ans.push_back(s);
    //         return;
    //     }
    //     for(int i=idx;i<s.length();i++){
    //         swap(s[idx],s[i]);
    //         helper(idx+1,s,ans);
    //         swap(s[idx],s[i]);
    //     }
    // }
    // string getPermutation(int n, int k) {
    //     string s="";
    //     for(int i=1;i<=n;i++){
    //         s+=to_string(i);
    //     }
    //     int idx;
    //     vector<string>ans;
    //     helper(0,s,ans);
    //     sort(ans.begin(),ans.end());
    //     return ans[k-1];
    // }
     string getPermutation(int n, int k) {
        string s="";
        for(int i=1;i<=n;i++){
            s+=to_string(i);
        }       
        vector<string>ans;
        do{
            ans.push_back(s);
        }              
        while(next_permutation(s.begin(),s.end()));
        return ans[k-1];
                           
     }
};