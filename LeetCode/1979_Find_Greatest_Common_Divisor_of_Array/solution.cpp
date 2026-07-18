class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mini = *min_element(nums.begin(),nums.end());
        int maxi = *max_element(nums.begin(),nums.end());
        if(maxi%mini == 0)return mini;
        
        while(mini != 0){
            int k = mini;
            mini = maxi%mini;
            maxi = k;
        }
        return maxi;
    }
};