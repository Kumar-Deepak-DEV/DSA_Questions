class Solution {
public:
    int findDuplicate(vector<int>& nums) {


        // unordered_map <int,int> m;
        // for(int i = 0; i<nums.size();i++){
        //     if(!m[nums[i]]) m[nums[i]] = 1;
        //     else return nums[i];
        // }

        for(int i = 0; i < nums.size(); i++) {
        int idx = abs(nums[i]);

        if(nums[idx] < 0) {
            return idx;
        }

        nums[idx] *= -1;
        }
        
        return 0;
    }
};