class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //map... 
        unordered_map <int,int> maps;
        for(int x: nums){
            maps[x]++;
        }
        for(int x: nums){
            if(maps[x] == 1) return x;
        }
        return -1;
    }
};