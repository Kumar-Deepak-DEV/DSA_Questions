class Solution {
public:
    string clearDigits(string s) {
        vector <char> v1;
        for(int i = 0;i<s.size(); i++){
            if(s[i] - '0' >9) v1.push_back(s[i]);
            else v1.pop_back();
        }
        string res = "";
        for(int i = 0; i<v1.size(); i++){
            res+=v1[i];
        }
        return res;
    }
};