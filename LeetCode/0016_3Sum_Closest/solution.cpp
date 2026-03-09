class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

    if(nums.size()==3) return nums[0]+nums[1]+nums[2];

    sort(nums.begin(),nums.end());
    int sum=1e9;
    for(int i=0;i<nums.size();i++){
        int left = i+1;
        int right = nums.size()-1;
        while (left < right) {
            int sum2 = nums[i]+nums[left]+nums[right];
            
            int n = target<sum?sum-target:target-sum;
            int m = target<sum2?sum2-target:target-sum2;
    
            if(m<n) sum = sum2;

            if(sum2 == target) return target;
            else if(sum2 > target ) right--;
            else left++;

        }
    }
    return sum;
    }
};