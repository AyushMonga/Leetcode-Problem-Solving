class Solution {
public:
    void dfs(int r,int c,vector<vector<int>>&vis,vector<vector<int>>&image,int color){
        int n=image.size();
        int m=image[0].size();
        vis[r][c]=1;
        int check=image[r][c];
        image[r][c]=color;
        int dr[]={-1,1,0,0};
        int dc[]={0,0,-1,1};
        for(int i=0;i<4;i++){
            int nrow=r+dr[i];
            int ncol=c+dc[i];
            
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m){
                if(!vis[nrow][ncol]){
                if(image[nrow][ncol]==check){
                    dfs(nrow,ncol,vis,image,color);
                }
            }
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        if(image[sr][sc]!=color){
            dfs(sr,sc,vis,image,color);
        }
        return image;
    }
};