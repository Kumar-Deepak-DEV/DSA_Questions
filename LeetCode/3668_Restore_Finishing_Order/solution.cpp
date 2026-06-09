class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector <int>arr;
        unordered_set<int>sets;
        for(int x: friends)sets.insert(x);
        for(int x:order){
            if(sets.count(x)) arr.push_back(x);
        }
    return arr;
    }
};