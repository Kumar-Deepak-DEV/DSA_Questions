class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string res="";
        for(string s:words){
            int sum = 0;
            for(char c : s) sum+=weights[c-'a'];
            sum = sum%26;
            char x = 'z'-sum;
            res+=x;            
        }
        return res;
    }
};