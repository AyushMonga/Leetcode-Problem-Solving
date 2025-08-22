class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int minR=n,maxR=-1;
        int minC=m,maxC=-1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    minR=min(minR,i);
                    minC=min(minC,j);
                    maxR=max(maxR,i);
                    maxC=max(maxC,j);
                }
            }
        }
        return (maxR-minR+1)*(maxC-minC+1);
    }
};