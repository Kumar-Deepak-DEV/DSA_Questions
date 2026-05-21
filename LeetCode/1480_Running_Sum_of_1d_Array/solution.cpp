class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        // nums = [1,2,4,5,6]
        // res = [1,3,7,12,18]
        vector<int> res;
        long long sum=0;
        for(int i = 0; i<nums.size();i++){
            sum+=nums[i];
            res.push_back(sum);
        }
        return res;
    }
};