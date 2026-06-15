class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int n = 0;
        vector<string>st;
        while(n<s.size()){
            string temp = "";
            for(int i = 0;i<k;i++){

                if(n>=s.size()){
                    temp+=fill;
                    continue;
                }
                temp+=s[n];
                n++;
            }
            st.push_back(temp);
        }
        return st;
    }
};