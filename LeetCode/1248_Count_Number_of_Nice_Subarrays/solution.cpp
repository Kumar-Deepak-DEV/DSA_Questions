class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        vector<int>store;
        int count = 0;
        for(int i = 0; i<nums.size();i++){
            if(nums[i]%2 != 0) store.push_back(i);
        }
        int m = store.size();
        for(int i = 0; i <m-k+1;i++){
            int a = (i == 0) ? store[i]+1 : store[i]-store[i-1];
            int b = (i+k-1 == m-1) ? nums.size()-store[i+k-1] : store[i+k]- store[i+k-1];
            count+=a*b;
        }
        return count;
    }
};