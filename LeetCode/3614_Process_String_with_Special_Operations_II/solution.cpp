class Solution {
public:
    char processStr(string s, long long k) {
        long long count = 0;
        for (char c : s) {
            if (c == '*') {
                if (count > 0) count--;
            } else if (c == '#') count *= 2;
            else if (c == '%') ;
            else count++;
        }
        if (k < 0 || k >= count) return '.';
        for (int i = s.size() - 1; i>= 0; i--) {
            char c = s[i];
            if (c == '#') {
                count /= 2;
                k %= count;
            } 
            else if (c == '%') k = count - 1 - k;
            else if (c == '*') count++;
            else {
                count--;
                if (k == count) return s[i];
            }
        }
        return '.';
    }
};