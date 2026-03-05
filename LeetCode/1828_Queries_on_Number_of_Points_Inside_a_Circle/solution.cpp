class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points,
                            vector<vector<int>>& queries) {
        vector<int> res;
        for (int i = 0; i < queries.size(); i++) {
            int count = 0;
            int num3 = queries[i][2] * queries[i][2];
            for (int j = 0; j < points.size(); j++) {
                int num1 = (points[j][0] - queries[i][0]) * (points[j][0] - queries[i][0]);
                int num2 = (points[j][1] - queries[i][1]) *(points[j][1] - queries[i][1]);
                if (num1 + num2 <= num3) count++;
            }
            res.push_back(count);
        }
        return res;
    }
};