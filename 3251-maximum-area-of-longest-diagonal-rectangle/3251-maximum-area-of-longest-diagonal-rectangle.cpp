#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        double maxDiagonal = 0.0;
        int maxArea = 0;
        
        for (const auto& rect : dimensions) {
            int length = rect[0];
            int width = rect[1];
            double diagonal = sqrt(length * length + width * width);
            
            if (diagonal > maxDiagonal) {
                maxDiagonal = diagonal;
                maxArea = length * width;
            } else if (diagonal == maxDiagonal) {
                maxArea = max(maxArea, length * width);
            }
        }
        
        return maxArea;
    }
};