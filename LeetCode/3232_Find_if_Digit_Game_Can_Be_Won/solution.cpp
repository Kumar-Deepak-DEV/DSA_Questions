class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sing=0;
        int doub = 0;
        for (int i = 0; i<nums.size(); i++){
            if(nums[i]>9)doub+=nums[i];
            else sing += nums[i];
        }
        if(sing == doub) return false;
        return true;
    }
};