class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // vector<int>ans;
        // int k = 1;
        // for(int i = nums[0]+1;i<nums.back();i++){
        //     if(nums[k] != i)ans.push_back(i);
        //     else k++;
        // }
        // return ans;
        unordered_set<int> sets;
        vector<int>ans;
        int maxi = INT_MIN, mini=INT_MAX;
        for(int x : nums){
            sets.insert(x);
            maxi = maxi > x ? maxi : x;
            mini = mini < x ? mini : x;
        }
        for(int i= mini+1;i<maxi;i++){
            if(sets.count(i) == 0)ans.push_back(i);
        }
        return ans;

    }
};