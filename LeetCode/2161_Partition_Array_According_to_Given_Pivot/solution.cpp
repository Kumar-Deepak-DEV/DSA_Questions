class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>less,more;
        int count = 0;
        for(int i =0; i < nums.size(); i++){
            if(nums[i]>pivot)more.push_back(nums[i]);
            else if(nums[i]<pivot)less.push_back(nums[i]);
            else count++;
        }
        while(count--)less.push_back(pivot);
        for(int x:more)less.push_back(x);
        return less;
    }
};