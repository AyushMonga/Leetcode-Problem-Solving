class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n=words.size();
        vector<int>psum(n);
        for(int i=0;i<n;i++){
            int m=words[i].size();
            char f=words[i][0];
            char l=words[i][m-1];
            if((f=='a'||f=='e'||f=='i'||f=='o'||f=='u') && (l=='a'||l=='e'||l=='i'||l=='o'||l=='u')){
                if(i==0){
                    psum[i]=1;
                }
                else{
                    psum[i]=1+psum[i-1];
                }
            }
            else{
                if(i==0)psum[i]=0;
                else{
                    psum[i]=psum[i-1];
                }
            }
        }
        vector<int>ans;
        for(auto it:queries){
            if(it[0]==0){
                ans.push_back(psum[it[1]]);
            }
            else{
                ans.push_back(psum[it[1]]-psum[it[0]-1]);
            }
        }
        return ans;
    }
};