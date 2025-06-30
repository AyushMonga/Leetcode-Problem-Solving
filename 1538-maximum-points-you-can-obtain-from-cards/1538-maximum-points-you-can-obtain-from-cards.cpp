class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=cardPoints[i];
        }
        int max=sum;
        for(int i=1;i<=k;i++){
            sum=sum-cardPoints[k-i]+cardPoints[cardPoints.size()-i];
            if(max<sum){
                max=sum;
            }
        }
        return max;
    }
};