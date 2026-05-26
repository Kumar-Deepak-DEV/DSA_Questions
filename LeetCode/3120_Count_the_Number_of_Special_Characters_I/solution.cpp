    class Solution {
    public:
        int numberOfSpecialChars(string word) {
            // set, map... 
            unordered_set<char> caps;
            unordered_set<char> sm;
            for(int i = 0; i<word.size();i++){
                int a = word[i]-'A';
                if(a>=0 && a<=25) caps.insert(word[i]);
                else sm.insert(word[i]);
            }
            int count=0;
            for(char a:caps){
                a=a+32;
                if(sm.find(a)!=sm.end()) count++;
            }
            return count;
        }
    };