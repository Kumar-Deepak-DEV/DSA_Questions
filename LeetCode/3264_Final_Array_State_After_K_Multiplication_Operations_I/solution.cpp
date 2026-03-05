class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for (int i = 0; i < k; i++) {
            int min = 1e9;
            int index;
            for (int j = 0; j < nums.size(); j++) {
                if (min > nums[j]) {
                    min = nums[j];
                    index = j;
                }
            }
            nums[index] *= multiplier;
        }
        return nums;
    }
};