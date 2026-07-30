class Solution {
public:
    string compressedString(string word) {
        string s = "";
        char prev = word[0];
        int i = 1;
        int count = 1;
        while (i < word.size()) {
            if (word[i] == word[i - 1]) {
                count++;
                if (count == 9) {
                    s += to_string(count);
                    s += prev;
                    prev = word[i + 1];
                    count = 1;
                    i++;
                }
            } else {
                s += to_string(count);
                s += prev;
                prev = word[i];
                count = 1;
            }
            i++;
        }
        if (i == word.size()) {
            s += to_string(count);
            s += prev;
        }
        return s;
    }
};