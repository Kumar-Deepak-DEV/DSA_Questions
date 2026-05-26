class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n = 0;
        string res = "";
        for (int i = 0; i < word.length(); i++) {
            if (n == 0 && word[i] != ch)
                res = word[i] + res;
            else if (n == 0 && word[i] == ch) {
                n = 1;
                res = word[i] + res;
            } else if (n == 1)
                res = res + word[i];
        }
        if (n == 1)
            return res;
        else
            return word;
    }
};