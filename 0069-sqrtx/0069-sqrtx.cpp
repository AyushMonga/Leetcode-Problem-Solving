class Solution {
public:
    int mySqrt(int x) {
        int l=1;
        int r=x;
        if(x==1)return 1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if((long long)mid*mid==x){
                return mid;
            }
            else if((long long)mid*mid<x){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return r ;
    }
};