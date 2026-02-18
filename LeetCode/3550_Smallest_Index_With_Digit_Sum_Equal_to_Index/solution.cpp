class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int temp = 0;
        for (int i = 0; i < nums.size(); i++) {
            while (nums[i] > 0) {
                int a = nums[i] % 10;
                temp += a;
                nums[i] = (nums[i] -a);
                nums[i] = (nums[i] / 10);
            }
            if(temp==i) return i;
            temp = 0;
        }
        return -1;
    }
};