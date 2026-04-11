class Solution {
public:
    bool isPrime(int n) {
        if (n == 1)
            return false;
        int p = pow(n, 0.5);
        for (int i = 2; i <= p; i++) {
            if (n % i == 0)
                return false;
        }
        return true;
    }
    int count = 0;
    int minOperations(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                if (i % 2 == 1)
                    count += 0;
                else
                    count++;
            } else if (i % 2 == 1 && isPrime(nums[i])) {
                if (nums[i] == 2)
                    count += 2;
                else
                    count++;
            } else if (i % 2 == 0 && !isPrime(nums[i])) {
                while (!isPrime(nums[i])) {
                    if (nums[i] % 2 == 0) {
                        nums[i]++;
                        count++;
                        if (isPrime(nums[i]))
                            break;
                    } else {
                        nums[i] += 2;
                        count += 2;
                        if (isPrime(nums[i]))
                            break;
                    }
                }
            }
        }
        return count;
    }
};