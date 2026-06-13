class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        // vector<int>freq(201,0);
        // for(int x:nums) freq[x]++;
        // vector<vector<int>> res;
        // int n= nums.size();
        // while(n>0){
        //     vector<int> s;
        //     for(int i = 1; i<201;i++){
        //         if(freq[i]>0){
        //             s.push_back(i);
        //             n--;
        //             freq[i]--;
        //             if(n==0)break;
        //         }
        //     }
        //     res.push_back(s);
        // }
        // return res;

        // method 2

        // int n = nums.size();
        // unordered_set<int>index;
        // vector<vector<int>>res;
        // while(n>0){
        //     unordered_set <int> sets;
        //     vector<int> s;
        //     for(int i = 0;i<nums.size();i++){
        //         if(sets.count(nums[i]) == 0 && index.count(i) == 0) {
        //             s.push_back(nums[i]);
        //             index.insert(i);
        //             sets.insert(nums[i]);
        //             n--;
        //         }
        //     }
        //     res.push_back(s); // [1,1,1,1,1,1]
        // }
        // return res;

        // method 3

        unordered_map<int, int> maps;
        for (int x : nums)
            maps[x]++;
        int n = nums.size();
        vector<vector<int>> res;
        while (n > 0) {
            vector<int> m;
            for (auto& [key, val] : maps) {
                if (val > 0) {
                    val--;
                    n--;
                    m.push_back(key);
                }
            }
            res.push_back(m);
        }
        return res;
    }
};