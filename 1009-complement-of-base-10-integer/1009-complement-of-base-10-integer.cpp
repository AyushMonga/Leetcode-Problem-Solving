class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)return 1;
        string bn;
        while(n!=0){
            if(n%2==0){
                bn.push_back('0');
            }
            else{
                bn.push_back('1');
            }
            n/=2;
        }
        for(int i=0;i<bn.size();i++){
            if(bn[i]=='1'){
                bn[i]='0';
            }
            else{
                bn[i]='1';
            }
        }
        int ans=0;
        for(int i=0;i<bn.size();i++){
            if(bn[i]=='1'){
                if(i==0){
                    ans+=1;
                }
                else{
                    ans+=pow(2,i);
                }
            }
        }
        return ans;

    }
};