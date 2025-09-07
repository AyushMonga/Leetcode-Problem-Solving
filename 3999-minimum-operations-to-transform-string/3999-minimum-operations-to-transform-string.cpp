class Solution {
public:
    int minOperations(string s) {
        set<char>st;
        for(int i=0;i<s.size();i++){
            st.insert(s[i]);
        }
        int ans=INT_MIN;
        for(auto it:st){
            if(it!='a'){
            ans=max(ans,'z'-it+1);
            }
            else{
                ans=max(ans,0);
            }
        }
        return ans;
    }
};