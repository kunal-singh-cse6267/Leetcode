class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int n = points.size();
        sort(points.begin(),points.end());
        int max_Width = 0;
        for(int i = 0;i<n-1;i++){
            int width = points[i+1][0] - points[i][0];
            max_Width = max(max_Width, width);
        }
        return max_Width;
    }
};