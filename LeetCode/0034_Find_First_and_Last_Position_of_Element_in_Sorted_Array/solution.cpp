class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()<1) return {-1,-1};
        int first = -1;
        int second = -1;
        int i = 0;
        int j = nums.size() - 1;
        int mid = -1;
        while (i <= j) {
            mid = ((i + j) / 2);
            if (nums[mid] == target)
                break;
            else if (target > nums[mid])
                i = mid + 1;
            else
                j = mid - 1;
        }
        if (nums[mid] == target) {
            first = mid;
            second = mid;
        }
        while (first>0 && nums[first - 1] == target)
            first--;
        while (second<nums.size()-1 && nums[second + 1] == target)
            second++;

        vector <int> st = {first,second};

        return st;
    }
};