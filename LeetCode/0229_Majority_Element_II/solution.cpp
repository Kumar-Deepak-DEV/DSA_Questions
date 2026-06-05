class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> maps;
        vector <int>res;
        for(int x:nums)maps[x]++;
        for(const auto & [key,val]:maps) {
            if(val>nums.size()/3) res.push_back(key);
        }
        return res;
    }
};