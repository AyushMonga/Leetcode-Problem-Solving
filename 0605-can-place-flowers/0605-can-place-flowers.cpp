class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int i=1;
        if(n==0)return true;
        if(flowerbed.size()==1){
            if(flowerbed[0]==0 && n==1){
                return true;
            }
            else{
                return false;
            }
        }
        if(flowerbed[0]==0){
            if(flowerbed[1]==0){
                flowerbed[0]=1;
                n--;
            }
        }
        while(i<flowerbed.size()-1 && n>0){
            if(flowerbed[i]==1 || flowerbed[i-1]==1 || flowerbed[i+1]==1){
                i++;
                continue;
            }
            flowerbed[i]=1;
            n--;
            i++;
        }
        if(flowerbed[flowerbed.size()-1]==0){
            if(flowerbed[flowerbed.size()-2]==0){
                n--;
            }
        }
        if(n<=0){
            return true;
        }
        return false;
    }
};