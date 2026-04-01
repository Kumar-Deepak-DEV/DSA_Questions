class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int m = 0;
        int count = 0;
        if(ruleKey == "color") m = 1;
        if(ruleKey == "name") m = 2;
        for(int i = 0; i<items.size();i++){
            if(items[i][m] == ruleValue) count++;
        }
        return count;
    }
};