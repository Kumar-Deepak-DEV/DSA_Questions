class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int, int> m1;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid.size(); j++) {
                if(!m1[grid[i][j]])m1[grid[i][j]]=1;
                else m1[grid[i][j]]+=1;
            }
        }
        int repeat;
        int missing;
        int n = m1.size();
        for(int i=1;i<=n+1;i++){

            if(!m1[i]) missing = i;
            else if(m1[i] == 2) repeat=i;
        }
        return {repeat,missing};
    }
};