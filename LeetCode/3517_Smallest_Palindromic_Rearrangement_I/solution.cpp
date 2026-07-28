class Solution {
public:
    string smallestPalindrome(string s) {
        // int n = s.size();
        // int k = n / 2;
        // if (n % 2 == 0) {
        //     sort(s.begin(), s.begin() + k);
        //     sort(s.begin() + k, s.end());
        //     reverse(s.begin() + k, s.end());
        // } else {
        //     sort(s.begin(), s.begin() + k);
        //     sort(s.begin() + k+1, s.end());
        //     reverse(s.begin() + k+1, s.end());
        // }
        // return s;

        if (s.size() == 1)
            return s;
        int n = s.size();
        vector<int> freq(26, 0);
        for (int i = 0; i < n / 2; i++) {
            freq[s[i] - 'a']++;
        }
        string ss = "";
        for (int i = 0; i < 26; i++) {
            for (int j = 0; j < freq[i]; j++) {
                ss += char('a' + i);
            }
        }
        string k = ss;
        reverse(k.begin(), k.end());
        if (n % 2 != 0) {
            
            ss = ss + s[n / 2] + k;
        } else
            ss = ss + k;

        return ss;
    }
};