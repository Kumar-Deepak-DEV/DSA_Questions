class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count = 0;
        for(int i = 0; i<nums.size(); i++){
            int n = nums[i];
            while(n>0){
                int a = n%10;
                if(a==digit ) {
                    count++;
                    // break;    
                }
                n/=10;
            }
        }
        return count;
    }
};