class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        set<int>st;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        vector<int>arr1;
        for(auto it:mp){
            st.insert(it.second);
            arr1.push_back(it.second);
        }
        vector<int>arr2;
        for(auto it:st){
            arr2.push_back(it);
        }
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());
        return arr1==arr2;


    }
};