class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=0;
        int x=0;
        for(int i=0;i<nums.size();i++){
            if(0>nums[i])n++;
            else if(nums[i]>0)x++;
        }
        return x>n?x:n;
    }
};