class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<int>visited(n,0);
        stack<int>st;
        st.push(0);
        visited[0]=1;
        while(!st.empty()){
            int u=st.top();
            st.pop();
            for(int i=0;i<rooms[u].size();i++){
                if(visited[rooms[u][i]]==0){
                    visited[rooms[u][i]]=1;
                    st.push(rooms[u][i]);
                }
            }
        }
        for(auto it:visited){
            if(it==0){
                return false;
            }
        }
        return true;
    }
};