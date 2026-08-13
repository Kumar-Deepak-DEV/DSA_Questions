class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<vector<char>> val = {{},
                                    {},
                                    {'a', 'b', 'c'},
                                    {'d', 'e', 'f'},
                                    {'g', 'h', 'i'},
                                    {'j', 'k', 'l'},
                                    {'m', 'n', 'o'},
                                    {'p', 'q', 'r', 's'},
                                    {'t', 'u', 'v'},
                                    {'w', 'x', 'y', 'z'}};
        vector<string> ans;
        for (int i = 0; i < val[digits[0] - '0'].size(); i++) {
            string s = "";
            s += val[digits[0] - '0'][i];

            if (digits.size() > 1) {
                for (int j = 0; j < val[digits[1] - '0'].size(); j++) {
                    string ss = s;
                    ss += val[digits[1] - '0'][j];

                    if (digits.size() > 2) {
                        for (int k = 0; k < val[digits[2] - '0'].size(); k++) {
                            string sss = ss;
                            sss += val[digits[2] - '0'][k];

                            if (digits.size() > 3) {
                                for (int l = 0; l < val[digits[3] - '0'].size();
                                     l++) {
                                    string ssss = sss;
                                    ssss += val[digits[3] - '0'][l];
                                    ans.push_back(ssss);
                                }
                            } else
                                ans.push_back(sss);
                        }
                    } else
                        ans.push_back(ss);
                }
            } else
                ans.push_back(s);
        }
        return ans;
    }
};