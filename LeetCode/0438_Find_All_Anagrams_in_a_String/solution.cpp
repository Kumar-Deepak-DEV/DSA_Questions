class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> a;
        if (s.size() < p.size())
            return a;
        vector<int> freq(26, 0);
        vector<int> pfreq(26, 0);

        for (int i = 0; i < p.size(); i++)
            freq[s[i] - 'a']++;
        for (int i = 0; i < p.size(); i++)
            pfreq[p[i] - 'a']++;

        for (int i = 0; i <= s.size() - p.size(); i++) {
            if(freq==pfreq)a.push_back(i);
            if (i < s.size() - p.size()) {
                freq[s[i] - 'a']--;
                freq[s[i + p.size()] - 'a']++;
            }
        }
        return a;
    }
};