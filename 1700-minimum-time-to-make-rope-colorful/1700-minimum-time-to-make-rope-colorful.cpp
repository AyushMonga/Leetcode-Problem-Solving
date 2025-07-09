class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans=0;
        for(int i=0;i<colors.size();i++){
            if(colors[i]==colors[i+1]){
                int a=min(neededTime[i],neededTime[i+1]);
                ans+=a;
                if(a==neededTime[i+1]){
                    int temp=neededTime[i];
                    neededTime[i]=neededTime[i+1];
                    neededTime[i+1]=temp;
                }
            }
        }
    return ans;
    }
};