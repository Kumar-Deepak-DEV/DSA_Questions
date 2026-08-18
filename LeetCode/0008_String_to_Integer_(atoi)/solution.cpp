class Solution {
public:
    int myAtoi(string s) {
        string ss = "";
        int i = 0;
        int j = s.size() - 1;
        while (i < s.size()) {
            if (s[i] != ' ')
                break;
            i++;
        }
        while (j >= 0) {
            if (s[j] != ' ') break;
            j--;
        }
        for (; i <= j; i++) {
            char element = s[i];
            if ((element == '-' || element == '+') && ss == "") ss+=element;
            else if (element >= '0' && element <= '9') ss+=element;
            else break;
        } // this works here

        if (s.size() == 0 || (ss.size() == 1 && (ss[0] == '-' || ss[0] == '+'))) return 0;

        int k = 0;
        bool neg = false;
        if (ss[0] == '+') k++;
        if (ss[0] == '-') {
            k++;
            neg = true;
        }
        long long z = 0;
        while(k<ss.size()){
            long long m = ss[k] - '0';
            z = z*10 + m;
            k++;
            if (z >= 2147483648LL) {
                return neg == true ?  -2147483648 : 2147483647;
            }
        }
        if(neg) z *= -1;
        return z;
    }
};