class Solution {
public:
    int findMin(vector<int>& nums) {
        //    int min=1e9;
        //     for(int i=0;i<nums.size();i++){
        //         if(min>nums[i]) min=nums[i];
        //     }
        //     return min;
        // can be done using 2 pointers...

        int left = 0;
        int right = nums.size() - 1;
        int mid = 0;

        while (nums[left] == nums[right] && left!=right)
            left++;
        
        if(left==right)return nums[left];
        while (left < right) {
            mid = (left + right) / 2;
            if (nums[mid] > nums[right])
                left = mid + 1;
            else
                right = mid;
        }
        return nums[left];
    }
};