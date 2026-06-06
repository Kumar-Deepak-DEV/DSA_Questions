class Solution {
public:
    string removeDuplicates(string s, int k) {
        // string str = "";
        // for(int i = 0;i<s.size();i++){
        // string temp ="";
        // int j = 0;
        // int n = str.size();
        //     if(str.size()>=k-1) temp = str.substr(str.size()-k+1,k-1);
        //     if(temp!=""){
        //         for(;j<temp.size();j++){
        //             if(temp[j]!=s[i]){
        //                 str.push_back(s[i]);
        //                 break;
        //             }
        //         }
        //         if(n<str.size()) continue;
        //         str.erase(str.length() - k+1);
        //     }
        //     else str.push_back(s[i]);
        // }
        // return str;

        vector <pair<char,int>> st;

        for(char x : s){
            if(!st.empty() && st.back().first == x){ st.back().second++;
            if(st.back().second == k) st.pop_back();}
            else st.push_back({x,1});
        }

        string ans="";
        for(auto & x:st) ans.append(x.second,x.first);

        return ans;

    }
};