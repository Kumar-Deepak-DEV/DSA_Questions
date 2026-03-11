class Solution {
public:
    int bitwiseComplement(int num) {
        int n = 2;
        int len = 0;
        int res = 0;
        if(num==0)return 1;

        while (num > 0) {
            int a = num % n;
            if (a == 0)
                res += pow(2, len);
            len++;
            num = (num / n);
        }
        return res;
    }
};