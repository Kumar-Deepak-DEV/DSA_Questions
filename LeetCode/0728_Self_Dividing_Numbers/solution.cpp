class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        while (left <= right) {
            int a = left;
            while (a > 0) {
                int num = a%10;
                if (num == 0 || left % num != 0 ) break;
                a -= num;
                a /= 10;
                if (a == 0)
                    res.push_back(left);
            }
            left++;
        }
        return res;
    }
};