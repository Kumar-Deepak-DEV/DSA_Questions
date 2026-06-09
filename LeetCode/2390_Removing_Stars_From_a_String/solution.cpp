class Solution {
public:
    string removeStars(string s) {
        vector<char>in;
        for(char x:s){
            if(x == '*')in.pop_back();
            else in.push_back(x);
        }
        string ss = "";
        for(char x:in)ss+=x;
        return ss;
    }
};