class Solution {
public:
    bool isPrime(int n) {
        if (n < 2)
            return false;
        if (n == 2)
            return true;
        if (n % 2 == 0)
            return false;
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0)
                return false;
        }
        return true;
    }
    bool completePrime(int num) {
        string s = to_string(num);
        int i = 0;
        int y = 0;
        int x = 0;
        while (i < s.size()) {
            x = x * 10 + s[i] - '0';
            y = (s[s.size() - 1 - i] - '0') * pow(10, i) + y;
            cout << x << endl << y << endl;
            bool a = isPrime(x);
            bool b = isPrime(y);
            if (a == false || b == false)
                return false;
            i++;
        }
        return true;
    }
};