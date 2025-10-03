class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int a=str1.size();
        int b=str2.size();
        if(str1+str2!=str2+str1){
            return "";
        }
        int result=min(a,b);
        while(result>0){
            if(a%result==0 && b%result==0){
                break;
            }
            result--;
        }
        string ans=str2.substr(0,result);
        return ans;
    }
};