class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int area=INT_MIN;
        while(l<r){
            int len=min(height[l],height[r]);
            int b=r-l;
            int a=len*b;
            area=max(area,a);
            if(height[l]<height[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return area;
    }
};