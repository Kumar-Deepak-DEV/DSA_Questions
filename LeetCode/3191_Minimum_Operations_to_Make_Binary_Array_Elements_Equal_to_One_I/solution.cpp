class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count = 0;
        int i = 0;
        for(; i<nums.size()-2;i++){
            if(nums[i] == 0){
                nums[i]=1;
                nums[i+1] = nums[i+1] == 1 ? 0 : 1;
                nums[i+2] = nums[i+2] == 1 ? 0 : 1;
                count++;
            }
        }
        if(nums[i] == 0 || nums[i+1] == 0)return -1;
        return count;
    }
};