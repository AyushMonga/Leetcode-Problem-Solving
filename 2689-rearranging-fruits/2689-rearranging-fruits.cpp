class Solution {
public:
    long long minCost(vector<int>& basket1, vector<int>& basket2) {
        unordered_map<int,int>mp;
        for(int i=0;i<basket1.size();i++){
            mp[basket1[i]]++;
            mp[basket2[i]]++;
        }
        for(auto it:mp){
            if(it.second%2!=0){
                return -1;
            }
        }
        unordered_map<int,int>diff;
        for(int i=0;i<basket1.size();i++){
            diff[basket1[i]]++;
            diff[basket2[i]]--;
        }
        vector<int>swaps;
        for(auto it:diff){
            int num=abs(it.second);
                if(it.second!=0){
                for(int i=0;i<num/2;i++){
                    swaps.push_back(it.first);
                }
                }
            
        }
        sort(swaps.begin(), swaps.end());
        int min_element = INT_MAX;
        for (auto it : mp) {
            min_element = min(min_element, it.first);
        }
        long long ans = 0;
        for (int i = 0; i < swaps.size() / 2; i++) {
            ans += min(swaps[i], 2 * min_element);
        }
        return ans;
    }
};