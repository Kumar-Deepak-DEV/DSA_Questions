class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<int,int> jew = {};
        map<int,int> stone = {};
        for (int i = 0; i < jewels.size(); i++) {
            jew[jewels[i]] = jew[jewels[i]] + 1;
        }
        for (int i = 0; i < stones.length(); i++) {
            stone[stones[i]] = stone[stones[i]]+ 1;
        }
        int count = 0;
        for (const auto &[key,val] : jew) {
            if (stone[key] == 0)
                continue;
            else
                count += stone[key];
        }
        return count;
    }
};