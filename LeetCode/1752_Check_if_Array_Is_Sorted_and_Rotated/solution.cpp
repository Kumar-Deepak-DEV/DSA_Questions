class Solution {
public:
    bool check(vector<int>& nums) {
        int res = 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                res = i+1;
                break;
            }
        }

        if (res != 0) {
            reverse(nums.begin(), nums.begin() + res);
            reverse(nums.begin() + res, nums.end());
            reverse(nums.begin(),nums.end());
        }
        for (int i = 0; i < nums.size()-1; i++) {
            cout << nums[i] << endl;
            if(nums[i]>nums[i+1]) return false;
        }

        return true;
    }
};