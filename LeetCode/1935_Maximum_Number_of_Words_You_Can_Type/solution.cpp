class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<int>freq(26,0);
        for(char c : brokenLetters) freq[c-'a']++;

        int i = 0;
        int count = 0;
        while(i<text.size()){
            bool brok = false;
            while(i<text.size() && text[i]!=' '){
                if(freq[text[i]-'a'] != 0) brok = true;
                i++;
            }
            if(brok == false) count++;
            i++;
        }
        return count;
    }
};