class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        int x = start[0]+start[1];
        int y=target[0]+target[1];
        x = x-y;
        if(x%2 == 0)return true;
        return false;
    }
};