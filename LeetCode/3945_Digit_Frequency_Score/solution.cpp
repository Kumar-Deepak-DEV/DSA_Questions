class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int,int>maps;
        int sum =0;
        while(n>0){
            int a = n%10;
            maps[a]++;
            n/=10;
        }
        for(auto [key,val]:maps) sum+=key*val;
        return sum;
    }
};