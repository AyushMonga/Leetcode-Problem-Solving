class Solution {
public:
    bool prime(int n){
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    int sumOfPrimesInRange(int n) {
        string s=to_string(n);
        reverse(s.begin(),s.end());
        int r=stoi(s);
        int mini;
        int maxi;
        if(r>=n){
            mini=n;
            maxi=r;
        }
        else{
            mini=r;
            maxi=n;
        }
        int ans=0;
        for(int i=mini;i<=maxi;i++){
            if(i==1)continue;
            if(prime(i)){
                ans+=i;
            }
        }
        return ans;
    }
};