class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int j = 0;
        int x = nums.size();
        int ans = 0;
        for(int i = 0; i<x;i++){
            if(nums[i] == 0) {
                ans = max(ans, i-j);
                j = i+1;
            }
        }
        ans = max(ans,x-j);
        return ans;
    }
};