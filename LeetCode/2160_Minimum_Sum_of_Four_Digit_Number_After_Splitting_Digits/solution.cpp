class Solution {
public:
    int minimumSum(int num) {
        vector<int> nums;

        while (num > 0) {
            int a = num % 10;
            nums.push_back(a);
            num /= 10;
        }

        sort(nums.begin(), nums.end());

        int num1 = nums[0] * 10 + nums[3] + nums[1] * 10 + nums[2];
        return num1;
    }
};