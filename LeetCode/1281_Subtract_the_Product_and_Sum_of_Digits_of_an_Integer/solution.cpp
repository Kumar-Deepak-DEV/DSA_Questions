class Solution {
public:
    int subtractProductAndSum(int n) {
        int mult = 1;
        int add = 0;
        while (n > 0) {
            int a = n % 10;
            mult *= a;
            add += a;
            n -= a;
            n /= 10;
        }
        return mult - add;
    }
};