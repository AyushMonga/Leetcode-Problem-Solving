class Solution {
public:
    bool scoreBalance(string s) {
        int total=0;
        for(int i=0;i<s.size();i++){
            int a=s[i]-'0';
            total+=a-48;
        }
        if(total%2!=0){
            return false;
        }
        int req=total/2;
        int sum=0;
        int i=0;
        while(i<s.size()){
            int a=s[i]-'0';
            sum+=a-48;
            if(sum==req)return true;
            i++;
        }
        return false;
    }
};