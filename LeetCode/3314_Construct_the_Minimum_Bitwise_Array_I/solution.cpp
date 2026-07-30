class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int>ans;
        for(int i = 0; i<nums.size();i++){
            int res = -1;
            if (nums[i] % 2 == 0) {
                ans.push_back(-1);
                continue;
            }
            for(int j = 0; j<=nums[i];j++){
                if((j | (j+1)) == nums[i]){
                    res = j;
                    break;
                }
            }
            ans.push_back(res);
        }
        return ans;
    }
};