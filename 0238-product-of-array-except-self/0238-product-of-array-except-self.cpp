class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n= nums.size();
        vector<int>left(n);
        vector<int>right(n);
        left[0]=1;
        for(int i=1;i<nums.size();i++){
            left[i]=left[i-1]*nums[i-1];
        }
        right[n-1]=1;
        for(int i=n-2;i>=0;i--){
            right[i]=right[i+1]*nums[i+1];
        }
        vector<int>result(n);
        for(int i=0;i<n;i++){
            result[i]=left[i]*right[i];
        }
        return result;
    }
};