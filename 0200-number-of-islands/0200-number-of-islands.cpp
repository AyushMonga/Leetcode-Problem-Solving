class Solution {
public:
    void dfs(int r,int c,vector<vector<int>>&vis,vector<vector<char>>&grid){
        vis[r][c]=1;
        int n=grid.size();
        int m=grid[0].size();
        int dr[]={-1,1,0,0};
        int dc[]={0,0,-1,1};
        for(int i=0;i<4;i++){
                int nrow=r+dr[i];
                int ncol=c+dc[i];
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m){
                    if(grid[nrow][ncol]=='1' && vis[nrow][ncol]!=1){
                        vis[nrow][ncol]=1;
                        dfs(nrow,ncol,vis,grid);
                    } 
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int cnt=0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int r=0;r<n;r++){
            for(int c=0;c<m;c++){
                if(!vis[r][c] && grid[r][c]=='1'){
                    cnt++;
                    vis[r][c]=1;
                    dfs(r,c,vis,grid);
                }
            }
        }
        return cnt;
    }
};