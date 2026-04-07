class Solution {
public:
    bool isCircularSentence(string sen) {

        string temp = "";
        string prev = "";

        for (int i = 0; i < sen.size(); i++) {
            if (sen[i] == ' ') {

                if (prev != "" && (prev[prev.size() - 1] != temp[0])) return false;
                prev = temp;
                temp = "";
            } else temp += sen[i];
            if (i == sen.size() - 1) {
                if (prev != "") {
                    if (prev[prev.size() - 1] != temp[0])
                        return false;
                }
            }
        }
        if (sen[0] != temp[temp.size() - 1])
            return false;
        return true;
    }
};