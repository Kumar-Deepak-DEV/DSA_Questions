class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        // unordered_map<int, vector<int>>maps;
        // for(int i = 0; i<nums.size();i++){
        //     maps[nums[i]].push_back(i);
        // }
        // int count = 0;
        // for(auto [key,val]:maps){
        //     for(int i = 0;i<val.size();i++) {
        //         for(int j = i+1; j< val.size();j++) {
        //             if(val[i]*val[j] % k == 0)count++;
        //         }
        //     }
        // }
        // return count;

        int count = 0;

        for(int i = 0; i< nums.size();i++){
            for(int j = i+1;j<nums.size();j++){
                if(nums[i]==nums[j] && i*j %k == 0)count++;
            }
        }
        return count;
    }
};