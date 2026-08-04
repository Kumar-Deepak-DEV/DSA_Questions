class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int> maps;
        vector<string> ans;
        int count = INT_MAX;
        for (int i = 0; i < list1.size(); i++) maps[list1[i]] = i;
        for (int i = 0; i < list2.size(); i++) {
            if (maps.count(list2[i]) != 0) {
                if (maps[list2[i]] + i == count) ans.push_back(list2[i]);
                else if (maps[list2[i]] + i < count) {
                    ans.clear();
                    ans.push_back(list2[i]);
                    count = maps[list2[i]] + i;
                }
            }
        }
        return ans;

        // unordered_map<string, int> maps;
        // map<int, vector<string>> res;
        // for (int i = 0; i < list1.size(); i++)
        //     maps[list1[i]] = i;
        // for (int i = 0; i < list2.size(); i++) {
        //     if (maps.count(list2[i]) != 0)
        //         res[i + maps[list2[i]]].push_back(list2[i]);
        // }
        // for (auto [key, val] : res) {
        //     if (!val.empty())
        //         return val;
        // }
        // return {};
    }
};