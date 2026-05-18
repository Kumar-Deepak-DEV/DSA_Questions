class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char, int> obj;
        if (sentence.size() < 26)
            return false;
            for (int i = 0; i < sentence.size(); i++) {
                    obj[sentence[i]] = 1;
            }
        for (int i = 0; i <= 25; i++) {
            char temp ='a'+i;
            if (obj[temp] == 0) return false;
        }
        return true;
    }
};