class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector <vector<int>> res;
        for(int i =0;i<nums.size()-2;i++){
            if(i>0 && nums[i] == nums[i-1] ) continue; // nums[i] == nums[i+1] wrong
            // if(nums[i] == nums[i-1] && i>0 ) continue; // nums[i] == nums[i+1] wrong
            int left = i+1;
            int right = nums.size()-1;
            while(left<right){
                if(nums[i]+nums[left]+nums[right] == 0) {
                    vector <int> a = {nums[i],nums[left],nums[right]};
                    res.push_back(a);
                    while(left<right && nums[left] == nums[left+1]) left++;
                    while(left<right && nums[right] == nums[right-1]) right--;

                    left++;
                    right--;
                }
                else if(nums[i]+nums[left]+nums[right] > 0) right--;
                else left++;
            }
        }
        return res;
    }
}; // 1,1,0,-1,-1;
// 1,0,-1 // 1,0,-1

// -1,-1,-1,0 ,0 ,0,1,1,1 // -1 

// -1, -1  2