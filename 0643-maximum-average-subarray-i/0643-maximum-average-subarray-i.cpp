class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        double avg=sum/k;
        int l=0;
        for(int r=k;r<nums.size();r++){
            sum-=nums[l];
            l++;
            sum+=nums[r];
            double check=sum/k;
            if(check>avg){
                avg=check;
            }
        }
        return avg;
    }
};