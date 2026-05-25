class Solution {
public:
    string reverseWords(string s) {
        stringstream res(s);
        string word;
        string val="";
        while(res>>word){
            reverse(word.begin(),word.end());
            if(val!="") val = val+' '+word;
            else val = word;
        }
        return val;
    }
};