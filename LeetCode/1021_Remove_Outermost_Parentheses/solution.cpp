class Solution {
public:
    string removeOuterParentheses(string s) {
        int pairCount = 0;
        string res="";
        for(int i = 0;i<s.size();i++){
            if(s[i]=='(') {
                
                if(pairCount<0)res+=s[i];
                pairCount--;
            }
            else{
                if(pairCount<-1){
                    res+=s[i];
                }
                pairCount++;
            }
        }
        return res;
    }
};