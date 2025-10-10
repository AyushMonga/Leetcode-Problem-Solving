class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        priority_queue<int,vector<int>,greater<int>>minHeap;
        long long sum=0;
        if(candidates>costs.size()/2){
            for(int i=0;i<costs.size();i++){
                minHeap.push(costs[i]);
            }
            for(int i=0;i<k;i++){
                sum+=minHeap.top();
                minHeap.pop();
            }
            return sum;
        }
        int l=0;
        int r=costs.size()-1;
        priority_queue<int,vector<int>,greater<int>>minHeap1;
        priority_queue<int,vector<int>,greater<int>>minHeap2;
        long long ans=0;
        while(minHeap1.size()<candidates){
            minHeap1.push(costs[l++]);
        }
        while(minHeap2.size()<candidates){
            minHeap2.push(costs[r--]);
        }
        for(int i=0;i<k;i++){
            if(minHeap1.empty()){
                ans+=minHeap2.top();
                minHeap2.pop();
                if(l<=r){
                    minHeap2.push(costs[r--]);
                } 
            }
            else if(minHeap2.empty()){
                ans+=minHeap1.top();
                    minHeap1.pop();
                      if(l<=r){
                        minHeap1.push(costs[l++]);
                }        
            }
            else if(minHeap1.top()<=minHeap2.top() || minHeap2.empty()){
                ans+=minHeap1.top();
                minHeap1.pop();
                if(l<=r){
                    minHeap1.push(costs[l++]);
                }
            }
            else if(minHeap2.top()<minHeap1.top()||minHeap1.empty()){
                ans+=minHeap2.top();
                minHeap2.pop();
                if(l<=r){
                    minHeap2.push(costs[r--]);
                }
            }
        }
        return ans;
    }
};