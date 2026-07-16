class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // string temp = "";
        // int count = 0;
        // for(int i = 0; i< s.size();i++){
        //     for(int j = i; j<s.size();j++){
        //         if(temp.find(s[j])==-1) temp+=s[j];
        //         else break;
        //     }
        //     count = count>temp.size()?count:temp.size();
        //     temp = "";
        // }
        // return count;

        int i = 0;
        int j = 0;
        unordered_set<char> st;
        int ans = 0;
        for(;i<s.size();i++){
            if(st.count(s[i]) != 1){
                st.insert(s[i]);
            }
            else{
                while(s[j] != s[i]) {
                    st.erase(s[j]);
                    j++;
                }
                j++;
            }
            ans = ans > i-j+1 ? ans : i-j+1;
        }
        return ans;
    }
};