class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // [1,3,5,6] 2
        // 1<2 ... 3>2... 

        for(int i = 0; i<nums.size();i++){
            if(nums[i]>=target) return i;
        }
        return nums.size();
    }
};