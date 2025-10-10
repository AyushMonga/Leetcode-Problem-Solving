class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<pair<int,int>>pairs;
        int n=nums1.size();
        for(int i=0;i<n;i++){
            pairs.push_back({nums2[i],nums1[i]});
        }
        sort(pairs.rbegin(),pairs.rend());
        priority_queue<int,vector<int>,greater<int>>minHeap;
        long long sum=0;
        long long maxi=INT_MIN;
        for(int i=0;i<n;i++){
            sum+=pairs[i].second;
            minHeap.push(pairs[i].second);
            if(minHeap.size()>k){
                sum-=minHeap.top();
                minHeap.pop();
            }
            if(minHeap.size()==k){
                maxi=max(maxi,sum*pairs[i].first);
            }

        }
        return maxi;
    }
};