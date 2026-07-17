class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> maps;
        for (int x : nums)
            maps[x]++;
        int maxm = 0;
        // for (int i = 0; i < nums.size(); i++) {
        //     if (maps[nums[i] + 1] != 0) {

        //         int k = maps[nums[i]] + maps[nums[i]+1];
        //         if (maxm < k)
        //             maxm = k;
        //     }
        // }
        for(auto [key,val]:maps){
            if(maps.count(key+1) != 0){
                int k = val+ maps[key+1];
                    if (maxm < k) maxm = k;
            }
        }
        return maxm;
    }
};