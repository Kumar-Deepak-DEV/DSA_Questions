class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int prev = nums[0];
        int sum = 0;
        for(int i = 1;i<nums.size();i++){
            if(prev>=nums[i]){
                sum += prev + 1 -nums[i];
                prev++;
                }
            else prev = nums[i];
        }
        return sum;

    }
};