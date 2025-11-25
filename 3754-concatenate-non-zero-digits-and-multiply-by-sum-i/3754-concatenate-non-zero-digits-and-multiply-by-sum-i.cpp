class Solution {
public:
    long long sumAndMultiply(int n) {
        long long ans;
        if(n==0)return 0;
        string s=to_string(n);
        string finals;
        for(int i=0;i<s.size();i++){
            if(s[i]!='0'){
                finals.push_back(s[i]);
            }
        }
        ans=stoi(finals);
        long long agn=ans;
        int sum=0;
        while(ans!=0){
            int a=ans%10;
            sum+=a;
            ans/=10;
        }
        return agn*sum;
    }
};