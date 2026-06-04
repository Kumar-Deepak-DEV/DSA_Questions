class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int> sets;
        for(int i = 0; i<nums.size();i++){
            if(sets.count(nums[i])) sets.erase(nums[i]);
            else sets.insert(nums[i]);
        }
        return *sets.begin();
    }
};