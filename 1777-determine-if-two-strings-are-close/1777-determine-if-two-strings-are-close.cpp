class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if (word1.size() != word2.size()) {
            return false;
        }
        
        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;
        
        for (char c : word1) {
            mp1[c]++;
        }
        for (char c : word2) {
            mp2[c]++;
        }
        
        for (auto& it : mp1) {
            if (mp2.find(it.first) == mp2.end()) {
                return false;
            }
        }
        
        unordered_map<int, int> freqCount1;
        unordered_map<int, int> freqCount2;
        
        for (auto& it : mp1) {
            freqCount1[it.second]++;
        }
        for (auto& it : mp2) {
            freqCount2[it.second]++;
        }
        
        return freqCount1 == freqCount2;
    }
};