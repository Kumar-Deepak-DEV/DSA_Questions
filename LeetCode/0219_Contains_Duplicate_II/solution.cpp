class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> maps;
        for (int i = 0; i < nums.size(); i++) {
            if (maps.count(nums[i]) == 0)
                maps[nums[i]] = i;
            else {
                if (abs(maps[nums[i]] - i) <= k)
                    return true;
                else
                    maps[nums[i]] = i;
            }
        }
        return false;
    }
};