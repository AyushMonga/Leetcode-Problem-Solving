class Solution {
public:
    int numSub(string s) {
        int ans=0,ones=0;
        for(char ch:s){
            if(ch=='1'){
                ones++;
                ans=(ans+ones)%((int)1e9+7);
            }
            else{
                ones=0;
            }
        }
        return ans;
    }
};