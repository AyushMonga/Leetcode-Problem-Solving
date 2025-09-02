class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        int odd=0;
        int count=0;
        int l=0,r=0;
        int prevcount=0;
        while(r<n){
            if(nums[r]%2!=0){
                odd++;
                prevcount=0;
            }
            while(odd==k){
                prevcount++;
                if(nums[l]%2!=0)odd--;
                l++;
            }
            count+=prevcount;
            r++;
        }
        return count;
    }
};