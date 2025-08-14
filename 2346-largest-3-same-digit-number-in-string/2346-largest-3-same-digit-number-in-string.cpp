class Solution {
public:
    string largestGoodInteger(string num) {
        int max=INT_MIN;
        for(int i=0;i<num.size()-2;i++){
            if(num[i]==num[i+1]&&num[i+1]==num[i+2]){
                string s=num.substr(i,3);
                int n=stoi(s);
                if(n>max){
                    max=n;
                }
            }
        }
        string ans=to_string(max);
        if(ans=="0"){
            return"000";
        }
        if(max==INT_MIN){
            return "";
        }
        return ans;
    }
};