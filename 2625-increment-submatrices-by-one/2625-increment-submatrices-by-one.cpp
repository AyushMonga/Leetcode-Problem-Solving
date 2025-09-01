class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>>mat(n,vector<int>(n,0));
        for(int i=0;i<queries.size();i++){
            int r1=queries[i][0],c1=queries[i][1],r2=queries[i][2],c2=queries[i][3];
            for(int i=r1;i<=r2;i++){
                for(int j=c1;j<=c2;j++){
                    mat[i][j]+=1;
                }
            }
        }
        return mat;
    }
};