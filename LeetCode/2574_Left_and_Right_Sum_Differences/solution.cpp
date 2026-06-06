class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int sum = 0;
        vector<int> left;
        for(int x:nums){
            left.push_back(sum);
            sum+=x;
        }
        for(int i = 0;i<nums.size();i++){
            int a = abs(sum-nums[i]-left[i]-left[i]);
            left[i]=a;
        }
        return left;
    }
};