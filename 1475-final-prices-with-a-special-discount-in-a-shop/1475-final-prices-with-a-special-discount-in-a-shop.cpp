class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int discount=0;
        vector<int>ans;
        for(int i=0;i<prices.size();i++){
            for(int j=i+1;j<prices.size();j++){
                if(prices[j]<=prices[i]){
                    discount=prices[j];
                    break;
                }
            }
            ans.push_back(prices[i]-discount);
            discount=0;
        }
        return ans;
    }
};