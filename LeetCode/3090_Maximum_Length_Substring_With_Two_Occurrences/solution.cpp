class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int>maps;
        int j = 0;
        int ans = 0;
        for(int i = 0; i< s.size();i++){
            maps[s[i]] ++;
                while(maps[s[i]] > 2) {
                    maps[s[j]]--;
                    j++;
                }
                ans= max(i-j+1 , ans);
        }
        return ans;
    }
};