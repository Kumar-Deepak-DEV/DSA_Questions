class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int ans = 0;
        for(int x = 1; x < points.size(); x++ ){
            ans = max(ans,points[x][0]-points[x-1][0]);
        }
        return ans;
    }
};