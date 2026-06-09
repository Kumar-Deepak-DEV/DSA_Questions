class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>maps;
        for(int x:nums){
            if(x%2==0)maps[x]++;
        }
        int count = 0;
        int max=-1;
        for(auto [key,val]:maps){
            if(count<val){
                count = val;
                max=key;
            }
            else if(count == val)max = max<key?max:key;
        }
        return max;
    }
};