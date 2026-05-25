class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0; i< s.size(); i++){
            int a = s[i]-'A';
            if(a>=0 && a<=25)s[i]='a'+a;
        }
        return s;
    }
};