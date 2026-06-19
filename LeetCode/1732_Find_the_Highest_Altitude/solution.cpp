class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxi=0;
        int sum = 0;
        for(int x : gain){
            sum+=x;
            if(sum>maxi)maxi = sum;
        }
        return maxi;
    }
};