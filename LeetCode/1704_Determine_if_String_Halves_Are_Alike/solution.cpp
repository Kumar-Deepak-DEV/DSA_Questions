class Solution {
public:
    bool halvesAreAlike(string s) {
        int firCount = 0;
        int secCount = 0;
        unordered_set<char>sets ={'a','e','i','o','u'};
        for (int i = 0; i < s.size(); i++) {
            char a = tolower(s[i]);
            if (sets.find(a) != sets.end()) {
                if (i < s.size() / 2) {
                    firCount++;
                } else {
                    secCount++;
                }
            }
        }
        return firCount==secCount;
    }
};