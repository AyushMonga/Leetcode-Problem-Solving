class Solution {
public:
    int maxBalancedShipments(vector<int>& weight) {
        int l=0;
        int max=INT_MIN;
        int count=0;
        for(int r=0;r<weight.size();r++){
            if(r-l+1==1){
                max=weight[r];
                continue;
            }
            if(weight[r]>=max){
                max=weight[r];
            }
            else{
                count++;
                l=r+1;
            }
        }
        return count;
    }
};