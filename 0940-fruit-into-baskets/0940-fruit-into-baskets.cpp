class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int max_len = 0;
        int l = 0;
        int r = 0;
        queue<int> window;  
        unordered_map<int, int> mp;  

        while (r < fruits.size()) {
            mp[fruits[r]]++;
            window.push(fruits[r]);
            
            while (mp.size() > 2) {
                int left_fruit = window.front();
                window.pop();
                mp[left_fruit]--;
                if (mp[left_fruit] == 0) {
                    mp.erase(left_fruit);
                }
                l++;
            }
            
            if (window.size() > max_len) {
                max_len = window.size();
            }
            
            r++;  
        }
        
        return max_len;
    }
};