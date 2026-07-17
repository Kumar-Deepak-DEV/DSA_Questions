class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>maps;
        long long sum = 0;
        long long ans = 0;
        for(int i = 0; i<nums.size();i++){
            sum+=nums[i];
            maps[nums[i]]++;
            if(i>=k){
                sum-=nums[i-k];
                maps[nums[i-k]]--;
                if (maps[nums[i - k]] == 0) maps.erase(nums[i - k]);
            }
            if (i >= k - 1 && maps.size() == k) {
                ans = max(ans, sum);
            }
        }
        return ans;
    }
};