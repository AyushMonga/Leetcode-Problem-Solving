class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(st.empty() || s[i]=='(' || s[i]=='{'||s[i]=='['){
                st.push(s[i]);
            }
            else{
            if(st.top()=='('){
                if(s[i]==')')st.pop();
                else st.push(s[i]);
            }
            else if(st.top()=='{'){
                if(s[i]=='}')st.pop();
                else st.push(s[i]);
            }
            else if(st.top()=='['){
                if(s[i]==']')st.pop();
                else st.push(s[i]);
            }
            }
        }
        if(st.empty())return true;
        return false;
    }
};