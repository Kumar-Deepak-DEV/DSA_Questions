class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> arr;
        int res = 0;
        int prev = 0;
        for (int i = 0; i < bank.size(); i++) {
            int count = 0;
            for (int j = 0; j < bank[i].size(); j++) {
                if (bank[i][j] == '1')count++;
            }
            if (count == 0) continue;
            res += prev * count;
            prev = count;
        }
        return res;
    }
};