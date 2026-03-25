class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        // int i = 0;
        // int j = 0;
        // int k = 0;
        // int l = 0;
        // while(word1[i][j] && word2[k][l]){
        //     if(word1[i][j] == word2[k][l]){
        //         l++;
        //         j++;
        //         if(j == word1[i].size()) {
        //             j=0;
        //             i++;
        //         }
        //         if(l == word2[k].size()) {
        //             l=0;
        //             k++;
        //         }
        //     }
        // }
        // if(word1[i][l] || word2[k][l])return false;
        // return true;
        string s="";
        string S="";
        for(int i = 0;i<word1.size();i++)s+=word1[i]; 
        for(int i = 0;i<word2.size();i++)S+=word2[i]; 
        if(s.size()!=S.size())return false;
        for(int i = 0;i<s.size();i++){
            if(s[i]!=S[i])return false;
        } 
        return true;
        
    }
};