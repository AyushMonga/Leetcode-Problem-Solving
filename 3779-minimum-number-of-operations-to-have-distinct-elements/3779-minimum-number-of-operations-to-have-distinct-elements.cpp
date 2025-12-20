class Solution {
public:
    int minOperations(vector<int>& nums) {
       unordered_set<int>st;
       int operations=0;
       for(operations=nums.size()-1;operations>=0;operations--){
        if(st.count(nums[operations]))break;
        st.insert(nums[operations]);
       }
       int ans=(operations+3)/3;
       return ans;
    }
};