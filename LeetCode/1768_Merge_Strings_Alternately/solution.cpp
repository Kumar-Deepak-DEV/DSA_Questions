class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = word1.length() > word2.length() ? word1.length() : word2.length();
        string res = "";
        for (int j = 0; j < i; j++) {
            if(j<word1.length()){
                res += word1[j];
            }
            
            if(j<word2.length()){
                res += word2[j];
            }
            
        }
        return res;
    }
};