class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {

        int n = nums.size();
        unordered_map<int, int> freq;
        for (int x : nums)
            freq[x]++;
        vector<vector<int>> buc(n + 1);
        for (const auto [key, val] : freq)
            buc[val].push_back(key);
        vector<int> ans;

        for (int i = 0; i <= n; i++) {

            sort(buc[i].begin(),buc[i].end());
            reverse(buc[i].begin(),buc[i].end());

            for (int ch : buc[i]) {
                int a = i;
                while (a--)
                    ans.push_back(ch);
            }
        }
        return ans;
    }
};