class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans;
        int i = 0; 
        int j = 0;
        double res;
        double sum = 0;
        for(; i<k;i++)sum+=nums[i];
        res = sum/k;
        ans = res;
        for(;i<nums.size();i++){
            sum-=nums[j];
            sum+=nums[i];
            res = sum/k;
            ans = max(res,ans);
            j++;
        }
        return ans;
    }
};