class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char,vector<int>>maps;
        for(int i = 0; i<s.size();i++){
            maps[s[i]].push_back(i);
        }
        int maxi=-1;
        for(const auto &[key,vec]:maps){
            int a = vec.back()-vec.front()-1;
            cout<<vec.back()<<endl<<vec.front()<<endl<<a<<endl;
            if(a>maxi)maxi=a;
        }
        return maxi;
    }
};