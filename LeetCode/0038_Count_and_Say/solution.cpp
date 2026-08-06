class Solution {
private:
    string rle (string s){
        char prev = s[0];
        int count = 1;
        string res = "";
        for(int i = 1;i<s.size();i++){
            if(prev == s[i])count++;
            else {
                char c = count+'0';
                res = res + c + prev;
                prev = s[i];
                count = 1; 
            }
        }
        char c = count+'0';
        res = res + c + prev;
        return res;
    }
public:
    string countAndSay(int n) {
        if (n == 1)return "1";
        string s = "1";
        for(int i = 0; i< n-1; i++){
            s = rle(s);
        }
        return s;
    }
};