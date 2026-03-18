class Solution {
public:
    int maxDistinct(string s) {
        unordered_set<char> s1;
        for(int i =0; i<s.size();i++){
            s1.insert(s[i]);
        }
        return s1.size();
    }
};