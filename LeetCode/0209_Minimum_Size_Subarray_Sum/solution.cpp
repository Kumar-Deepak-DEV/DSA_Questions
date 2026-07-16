class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0;
        int ans = INT_MAX;
        int sum = 0;
        for(int i = 0; i<nums.size();i++){
            sum+=nums[i];
            while(sum>=target){
                ans = ans>i-l+1?i-l+1:ans;
                sum = sum-nums[l];
                l++;
            }
        }
        return ans == INT_MAX?0:ans;
    }
};