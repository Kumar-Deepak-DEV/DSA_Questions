class Solution {
public:
    string reverseOnlyLetters(string st) {
        int i = 0;
        int j = st.size() - 1;
        while (i < j) {
            int a = st[i];
            int b = st[j];
            if (!(a>=65 && a<=90 || a>=97 && a<=122)) {
                i++;
            } else if (!(b>=65 && b<=90 || b>=97 && b<=122)) {
                j--;
            } else {
                char temp = st[i];
                st[i] = st[j];
                st[j]=temp;
                i++;
                j--;
            }
        }
        return st;
    }
};