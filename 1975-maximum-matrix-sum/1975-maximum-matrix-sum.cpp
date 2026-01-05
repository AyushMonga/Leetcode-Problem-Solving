class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int ngcount=0;
        int poscount=0;
        long long sum=0;
        int zero=0;
        int neg=INT_MAX;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]<0){
                    ngcount++;
                }
                else if(matrix[i][j]==0){
                    zero++;
                }
                else{
                    poscount++;
                }
                neg=min(abs(matrix[i][j]),neg);
                sum+=abs(matrix[i][j]);
            }
        }
        if(zero||ngcount%2==0){
            return sum;
        }
        return sum-neg-neg;
    }
};