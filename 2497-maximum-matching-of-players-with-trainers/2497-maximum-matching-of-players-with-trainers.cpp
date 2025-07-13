class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(trainers.begin(),trainers.end());
        reverse(trainers.begin(),trainers.end());
        sort(players.begin(),players.end());
        reverse(players.begin(),players.end());
        int i=0;
        int j=0;
        int count=0;
        while(i<players.size() && j<trainers.size()){
            if(players[i]<=trainers[j]){
                count++;
                i++;
                j++;
            }
            else{
                i++;
            }
        }
        return count;
    }
};