class Solution {
public:
    int compress(vector<char>& chars) {
        if (chars.size() == 1) return 1;
        int i = 1;
        int k = 1;
        int count = 1;
        while (i < chars.size()) {
            if (chars[i] == chars[i - 1]) count++;
            else {
                if (count > 1) {
                    string c = to_string(count);
                    for (char ch : c) {
                        chars[k] = ch;
                        k++;
                    }
                }
                chars[k] = chars[i];
                k++;
                count = 1;
            }
            i++;
        }
        if (i == chars.size()) {
            if (count > 1) {
                string c = to_string(count);
                for (char ch : c) {
                    chars[k] = ch;
                    k++;
                }
            }
        }
        return k;
    }
};