class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double current=0.0000;
        for(int i=0;i<k;i++){
            current+=nums[i];
        }
        double avg=current/k;
        double havg=avg;
        for(int i=k;i<nums.size();i++){
            current=current-nums[i-k]+nums[i];
            avg=current/k;
            if(havg<avg){
                havg=avg;
            }
        }
        return havg;
    }
};