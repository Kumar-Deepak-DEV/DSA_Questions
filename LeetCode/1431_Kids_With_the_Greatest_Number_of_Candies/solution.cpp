class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = 0;
        for (int x : candies) {
            if (max < x) max = x;
        }
        vector<bool> arr;
        for (int x : candies) {
            if ((max - extraCandies) <= x) arr.push_back(true);
            else arr.push_back(false);
        }
        return arr;
    }
};