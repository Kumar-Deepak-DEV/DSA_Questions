class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elemsum = 0;
        int digsum = 0;
        for (int i = 0; i < nums.size(); i++) {
            elemsum += nums[i];
            int a = nums[i];
            while (a > 0) {
                int m = a % 10;
                digsum += m;
                a /= 10;
            }
        }
        return abs(elemsum - digsum);
    }
};