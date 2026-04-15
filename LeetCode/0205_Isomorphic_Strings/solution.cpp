class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> obj;
        unordered_set <char>se;
        for (int i = 0; i < s.size(); i++) {
            if (obj.find(s[i]) == obj.end() && se.count(t[i]) == 0){
                obj[s[i]] = t[i];
                se.insert(t[i]);
            }
            else if(obj[s[i]] != t[i] || (obj.find(s[i]) == obj.end() && se.count(t[i]) != 0) )
                return false;
        }
        return true;
    }
};