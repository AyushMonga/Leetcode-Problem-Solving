class Solution {
public:
    string decToBin (int n){
        string bin = "";
        while(n){
            bin += n % 2 ? '1' : '0';
            n /= 2;
        }
        reverse(bin.begin() , bin.end());
        return bin;
    }
    string convertDateToBinary(string date) {
        int y = stoi(date.substr(0, 4));
        int m = stoi(date.substr(5, 2));
        int d = stoi(date.substr(8, 2));
        return decToBin(y) + '-' + decToBin(m) + '-' + decToBin(d);
    }
};