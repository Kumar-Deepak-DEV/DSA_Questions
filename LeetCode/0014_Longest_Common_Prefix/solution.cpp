class Solution {
public:
    // string longestCommonPrefix(vector<string>& strs) {
    //     string res = "";
    //     for(int i = 0; i<strs[0].size();i++){
    //         res+=strs[0][i];
    //         for(int j = 1; j<strs.size();j++){
    //             string s = strs[j].substr(0,i+1);
    //             if(s != res)return res.substr(0,i);
    //         }
    //     }
    //     return res;
    // }

    string longestCommonPrefix(vector<string>& strs) {
    for (int i = 0; i < strs[0].size(); i++) {
        char c = strs[0][i];

        for (int j = 1; j < strs.size(); j++) {
            if (i >= strs[j].size() || strs[j][i] != c)
                return strs[0].substr(0, i);
        }
    }
    return strs[0];
}

};