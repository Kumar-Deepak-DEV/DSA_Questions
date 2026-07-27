class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i = 0, j = 0, k=1;
        int ans = 0;
        bool zero = false;
        while(j<nums.size()){
            if(nums[j] == 1){
                j++;
            }
            else if(k>0){
                j++;
                k--;
                zero = true;
            }
            else{
                while(nums[i] != 0){
                    i++;
                }
                i++;
                k++;
            }
            int a = j-i;
            if(k == 0) a = j-i-1;
            ans = ans>a?ans:a;
        }
        if(!zero)ans--;
        return ans;
    }
};