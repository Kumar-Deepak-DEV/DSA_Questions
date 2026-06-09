class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        unordered_map<char,int>freq;
        for(char x:s)freq[x]++;
        vector<vector<char>>buc(n+1);
        for(const auto[key,val]:freq) buc[val].push_back(key);
        string ans;

        for(int i = n; i>=0;i--){
            for(char ch:buc[i])
            ans.append(i, ch);
        }
        return ans;
    }
};