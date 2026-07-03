class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        if(strs.size()==0) return {{}};
        
        vector <vector <string> >  res = {{strs[0]}};
        vector <string> match = {strs[0]};
        
        sort(match[0].begin(),match[0].end());

        for(int i = 1; i<strs.size();i++){

            string s = strs[i];
            sort(s.begin(),s.end());
            bool found = false;

            for(int j = 0; j<res.size();j++){

                if(match[j] == s) {
                    res[j].push_back(strs[i]);
                    found = true;
                    break;
                }
            }
            if(!found){
                res.push_back({strs[i]});    
                match.push_back(s);
            }
        }
        
        return res;
    }
};