class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum>9*num)return "";
        int curr=sum;
        string ans;
        for(int i=0;i<num;i++){
            int a=min(9,curr);
            ans+=('0'+a);
            curr-=a;
        }
        return ans;
    }
};