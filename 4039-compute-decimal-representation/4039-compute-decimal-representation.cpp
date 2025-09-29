class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        long long multiplier=1;
        vector<int>ans;
        while(n>0){
            int mod=n%10;
            if(mod!=0){
                ans.push_back(mod*multiplier);
            }
            n/=10;
            multiplier*=10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};