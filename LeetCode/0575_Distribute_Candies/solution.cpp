class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set <int> n;
        for(int i = 0; i<candyType.size();i++){
            n.insert(candyType[i]);
        }
        return candyType.size()/2>n.size()?n.size():candyType.size()/2;
    }
};