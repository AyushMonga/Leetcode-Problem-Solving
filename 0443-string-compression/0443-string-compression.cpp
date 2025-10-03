class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int j=0;
        while(j<chars.size()){
             char t=chars[j];
             chars[i]=t;
             j++;
             i++;
             int count=1;
             while(j<chars.size()&& chars[j]==t){
                count++;
                j++;
             }

             if(count==1){
                continue;
             }
             if(count>1){
                string add=to_string(count);
                for(int k=0;k<add.size();k++){
                    chars[i]=add[k];
                    i++;
                }
             }
             else{
             char add=count+'0';
             chars[i]=add;
             i++;
             }

        }
        return i;
    }
};