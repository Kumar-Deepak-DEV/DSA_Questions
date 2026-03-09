class Solution {
public:
    string largestEven(string s) {
        int i;
        string num="";
        for(i = s.size()-1;i>=0;i--){
            if((s[i]-'0')%2==0)break;
        }
        for(int j=0;j<=i;j++){
            num+= s[j];
        }
        return num;

    }
};