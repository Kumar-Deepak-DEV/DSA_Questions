class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        unordered_map<int,int> maps;
        for(int i = 0; i<nums.size()-1;i++){
            if(nums[i]==key) maps[nums[i+1]]++;
        }
        int maxFreq;
        int freq=0;
        for(const auto [key,val]:maps){
            if(val>freq){
                freq=val;
                maxFreq = key;
            }
        }
        return maxFreq;
    }
};