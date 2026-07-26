class Solution {
public:
    int minOperations(vector<int>& nums) {
        int prev = nums[0];
        for(int x : nums){
            if(x!=prev)return 1;
        }
        return 0;
    }
};