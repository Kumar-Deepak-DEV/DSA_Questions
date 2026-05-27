class Solution {
public:
    int numberOfSpecialChars(string word) {

        vector <int> caps(26,-1);
        vector <int> sm(26,-1);
        int count = 0;
        for (int i = 0; i < word.size(); i++) {
            int a = word[i] - 'A';
            if (a >= 0 && a <= 25) {
                if (caps[a]==-1)
                    caps[a] = i;
            } else {
                int a = word[i]-'a';
                sm[a] = i;
            }
        }
        for(int i = 0;i<26;i++){
            if(sm[i]<caps[i] && sm[i] != -1) count++;
        }
        return count;
    }
};