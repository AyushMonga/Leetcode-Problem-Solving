class Solution {
public:
    bool checkPrime(int n){
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true; 
    }
    long long splitArray(vector<int>& nums) {
        long long prime=0;
        long long num=0;
        for(int i=0;i<nums.size();i++){
            if(i==0){
                num+=nums[i];
            }
            else if(i==1){
                num+=nums[i];
            }
            else{
                if(checkPrime(i)){
                    prime+=nums[i];
                }
                else{
                    num+=nums[i];
                }
            }
            
        }
        return abs(prime-num);
    }
};