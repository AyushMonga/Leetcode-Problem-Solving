class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        vector<int>ans;
        for(int i=0;i<spells.size();i++){
            int mul=spells[i];
            int l=0;
            int r=potions.size()-1;
            int idx=-1;
            while(l<=r){
                int mid=l+(r-l)/2;
                if((long long)potions[mid]*mul>=success){
                    idx=mid;
                    r=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            if(idx==-1){
                ans.push_back(0);
            }
            else{
                ans.push_back(potions.size()-idx);
            }
        }
        return ans;
    }
};