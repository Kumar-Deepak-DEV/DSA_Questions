class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int left = 0;
        int right = piles.size()-2;
        int sum=0;
        while(left<right){
            sum+=piles[right];
            right-=2;
            left++;
        }
        return sum;
    }
};