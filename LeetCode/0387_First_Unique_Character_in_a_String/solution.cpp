class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map <char, int> obj;
        int ans = 1e9;
        for (int i = 0; i < s.size(); i++) {
                if (obj.find(s[i]) == obj.end())  obj[s[i]] =i;
                else obj[s[i]] = -1;
        }
        for (const auto & p : obj) {
            if (p.second  != -1)
                ans = min(ans,p.second);
        }
        return (ans == 1e9)?-1:ans;
    }
};