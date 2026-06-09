class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        int n = words.size();
        unordered_map<string, int> freq;
        for (string x : words)
            freq[x]++;
        vector<vector<string>> buc(n + 1);
        for (const auto [key, val] : freq)
            buc[val].push_back(key);
        vector<string> ans;

        for (int i = n; i > 0; i--) {

            sort(buc[i].begin(), buc[i].end());

            for (string ch : buc[i]) {
                k--;
                ans.push_back(ch);
                if (k == 0)
                    return ans;
            }
        }
        return ans;
    }
};