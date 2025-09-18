class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int currentgas=0;
        int start=0;
        int total=0;
        int cot=0;
        for(int i=0;i<gas.size();i++){
            total+=gas[i];
            cot+=cost[i];
        }
        if(total<cot){
            return -1;
        }
        for(int i=0;i<gas.size();i++){
            currentgas=currentgas+gas[i]-cost[i];
            if(currentgas<0){
                currentgas=0;
                start=i+1;
            }
        }
        return start;
    }
};