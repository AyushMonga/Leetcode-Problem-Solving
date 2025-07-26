class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<vector<int>> graph(n);  // Initialize graph with n nodes
        
        // Build the adjacency list
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(isConnected[i][j] == 1) {
                    graph[i].push_back(j);
                }
            }
        }
        
        vector<int> visited(n, 0);
        int provinces = 0;
        
        for(int i = 0; i < n; i++) {
            if(!visited[i]) {
                provinces++;  
                stack<int> st;
                st.push(i);
                visited[i] = 1;
                
                while(!st.empty()) {
                    int u = st.top();
                    st.pop();
                    
                    for(int v : graph[u]) {
                        if(!visited[v]) {
                            visited[v] = 1;
                            st.push(v);
                        }
                    }
                }
            }
        }
        
        return provinces;
    }
};