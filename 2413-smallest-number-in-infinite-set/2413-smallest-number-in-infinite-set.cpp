class SmallestInfiniteSet {
public:
    int current;
    priority_queue<int,vector<int>,greater<int>>minHeap;
    unordered_set<int> check;
    SmallestInfiniteSet() {
        current=1;
    }
    
    int popSmallest() {
        if(!minHeap.empty()){
            int smallest=minHeap.top();
            minHeap.pop();
            check.erase(smallest);
            return smallest;
        }
        return current++;
    }
    
    void addBack(int num) {
        if(num<current && check.find(num)==check.end()){
            minHeap.push(num);
            check.insert(num);
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */