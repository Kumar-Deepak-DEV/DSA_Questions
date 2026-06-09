class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        unordered_map<char, int> sets;
        vector<string> s;
        for (int i = 0; i < words.size(); i++) {
            unordered_map<char, int> temp;
            if (i == 0) {
                for (int j = 0; j < words[i].size(); j++)
                    sets[words[i][j]]++;
            } else {
                for (char x : words[i]) {
                    if (sets[x] > 0) {
                        sets[x]--;
                        temp[x]++;
                    };
                }
                sets = temp;
            }
        }
        for (auto [key, val] : sets) {
            while (val--) {
                string a = "";
                a += key;
                s.push_back(a);
            }
        };
        return s;
    }
};