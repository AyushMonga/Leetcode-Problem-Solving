class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int sol=0;
        for(int i=0;i<nums.size();i++){
            int count=0;
            int ans=0;
            for(int j=1;j*j<=nums[i];j++){
                if(nums[i]%j==0){
                    ans+=j;
                    count++;
                    if(j!=nums[i]/j){
                        ans+=nums[i]/j;
                        count++;
                    }
                }
            }
            if(count==4){
                sol+=ans;
            }
        }
        return sol;
    }
};