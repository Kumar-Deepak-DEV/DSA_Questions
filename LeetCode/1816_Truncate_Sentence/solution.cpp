class Solution {
public:
    string truncateSentence(string s, int k) {
        // let m = s.trim();
        string n = ""; 
        string temp = ""; 
        int count = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ')
                temp += s[i];
            if (s[i] == ' ' && s[i - 1] != ' ') {
                n += temp;
                temp = ' '; 
                count++;
                if (count == k)
                    break;
            } else if (s[i] != ' ' && i == s.size() - 1) {
                n += temp;
                temp = ' ';
                count++;
            }
        }
        return n;
    }
};