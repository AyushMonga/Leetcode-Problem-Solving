class Solution {
public:
    void helper(vector<vector<int>>&image,int sr,int sc,int color,vector<vector<int>>&vis){
        int n=image.size();
        int m=image[0].size();
        int check=image[sr][sc];
        vis[sr][sc]=1;
        image[sr][sc]=color;
        int dr[]={1,-1,0,0};
        int dc[]={0,0,-1,1};
        for(int i=0;i<4;i++){
            int nr=sr+dr[i];
            int nc=sc+dc[i];
            if(nr>=0 && nr<n && nc>=0 && nc<m && !vis[nr][nc]){
                if(image[nr][nc]==check){
                    helper(image,nr,nc,color,vis);
                }
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        helper(image,sr,sc,color,vis);
        return image;
    }
};