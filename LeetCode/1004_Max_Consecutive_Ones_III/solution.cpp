class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0; 
        int r = 0;
        int ans = INT_MIN;
        for(;r<nums.size();r++){
            if(nums[r] == 1);
            else if(k>0) {
                k--;
            }
            else{
                while(nums[l] == 1) l++;
                l++;
                
            }
            ans = ans>r-l+1?ans:r-l+1;
        }
        return ans;
    }
};