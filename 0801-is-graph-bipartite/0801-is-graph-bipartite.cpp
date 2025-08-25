class Solution {
public:
    bool check(int idx,int col,vector<vector<int>>&adj,vector<int>&color){
        queue<int>q;
        q.push(idx);
        int n=adj.size();
        color[idx]=col;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto it:adj[node]){
                if(color[it]==-1){
                    color[it]=!color[node];
                    q.push(it);
                }
                else if(color[it]==color[node]){
                    return false;
                }
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>colour(n,-1);
        for(int i=0;i<n;i++){
            if(colour[i]==-1){
                if(check(i,0,graph,colour)==false){
                    return false;
                }
            }
        }
        return true;
    
    }
};