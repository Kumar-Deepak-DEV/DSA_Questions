class Solution {
public:
    string sortSentence(string s) {
        unordered_map<char, string> m;
        string temp = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                if (s[i] > '0' && s[i] <= '9') {
                    m[s[i]-'0'] = temp;
                    temp = "";
                } else
                    temp += s[i];
            }
        }
        temp = m[1];
        for(int i = 2;i<=m.size();i++){
            temp=temp+' '+m[i];
        }
        return temp;
    }
};