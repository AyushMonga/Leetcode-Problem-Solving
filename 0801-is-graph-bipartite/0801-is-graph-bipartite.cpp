class Solution {
public:
    bool dfs(int node,vector<int>&colour,int col,vector<vector<int>>&graph){
        colour[node]=col;
        for(auto it:graph[node]){
            if(colour[it]==-1){
                if(dfs(it,colour,!col,graph)==false)return false;
            }
            else if(colour[it]==col)return false;
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>colour(n,-1);
        for(int i=0;i<n;i++){
            if(colour[i]==-1){
                if(dfs(i,colour,0,graph)==false){
                    return false;
                }
            }
        }
        return true;
    }
};