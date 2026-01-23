class Solution {
public:
    vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center, int radius) {
        vector<int>distance;
        for(int i=0;i<towers.size();i++){
            distance.push_back(abs(center[0]-towers[i][0])+abs(center[1]-towers[i][1]));
        }
        vector<int>ans(2,-1);
        int qf=INT_MIN;
        for(int i=0;i<distance.size();i++){
            if(distance[i]<=radius){
                if(qf<towers[i][2]){
                    ans[0]=towers[i][0];
                    ans[1]=towers[i][1];
                    qf=towers[i][2];
                }
                else if(qf==towers[i][2]){
                    if(towers[i][0]<ans[0]){
                        ans[0]=towers[i][0];
                        ans[1]=towers[i][1];
                    }
                    else if(towers[i][0]==ans[0]){
                        if(towers[i][1]<ans[1]){
                            ans[1]=towers[i][1];
                        }
                    }
                }
            }
        }
        return ans;
    }
};