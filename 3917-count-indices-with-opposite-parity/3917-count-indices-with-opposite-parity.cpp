class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        vector<int>res;
        for(int i=0;i<nums.size()-1;i++){
            int ans=0;
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]%2==0){
                    if(nums[j]%2==1){
                        ans++;
                    }
                }
                else{
                    if(nums[j]%2==0){
                        ans++;
                    }
                }
            }
            res.push_back(ans);
        }
        res.push_back(0);
        return res;
    }
};