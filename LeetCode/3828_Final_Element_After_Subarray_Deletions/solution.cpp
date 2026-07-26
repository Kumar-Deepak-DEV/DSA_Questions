class Solution {
public:
    int finalElement(vector<int>& nums) {
        return nums[0] > nums[nums.size()-1] ? nums[0] : nums[nums.size()-1];
    }
};