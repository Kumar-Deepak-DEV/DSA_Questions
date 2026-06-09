class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>maps;
        for(int x:nums)maps[x]++;
        int count=0;
        for(auto [key,val]:maps){
            if(val==1)return -1;
            if(val%3==1) val+=2;
            else if(val%3==2) val++;
            int a = val/3;
            count+=a;
        }
        return count>0?count:-1;
    }
};