class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {

        vector<int> g;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                g.push_back(grid[i][j]);
            }
        }
        k = k % g.size();
        vector<vector<int>> ans(grid.size());
        reverse(g.begin(), g.end());
        reverse(g.begin(), g.begin() + k);
        reverse(g.begin() + k, g.end());
        int a = 0;

        int idx = 0;

        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                ans[i].push_back(g[idx++]);
            }
        }
        return ans;
    }
};