class Solution {
public:
    string reverseWords(string str) {
        string temp = "";
    string s = "";
    for (int i = 0; i < str.size(); i++) {
        if (i == 0 && str[i] == ' ') continue;
        if (str[i] == ' ' && str[i - 1] == ' ') continue;
        else if (str[i] != ' ') temp += str[i];
        else {
            if(s!="")s = temp + ' ' + s;
            else s = temp;
            temp =  "";
        }
        if(i==str.size()-1 && str[i]!=' ') {
            if(s!= "")s = temp + ' ' + s;
            else s = temp;
        }
    }
    return s;
    }
};