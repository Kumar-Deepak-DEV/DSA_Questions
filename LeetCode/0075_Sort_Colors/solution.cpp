class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i =0;
        int k = 0;
        int j = nums.size()-1;
        while(i<=j){
            if(nums[i]==1)i++;
            else if(nums[i] == 2) {
                nums[i]=nums[j];
                nums[j]=2;
                j--;
            }
            else if(nums[i] == 0){
                nums[i] =nums[k];
                nums[k]=0;
                k++;
                i++;
                
            }
        }//to be updated
        // return nums;
    }
};