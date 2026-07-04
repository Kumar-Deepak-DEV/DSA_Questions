class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int i = nums.size();
        i /=2;
        int j = -1;
        int k = -1;
        for(int x:nums){
            if( x == nums[i]){
                if(j == -1) j = i;
                else return false;
            }
        }
        return true;
    }
};