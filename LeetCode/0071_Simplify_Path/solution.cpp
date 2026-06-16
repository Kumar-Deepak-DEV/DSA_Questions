class Solution {
public:
    string simplifyPath(string path) {
        int i = 1;
        vector<string>res;
        string pat;
        while(i<path.size()){
            while(i<path.size() && path[i]!='/' ){
                pat+=path[i];
                i++;
            }
            if(pat == ".."){
                if(!res.empty())res.pop_back();
            }
            else if(pat == "" || pat == ".");
            else res.push_back(pat);
            pat="";
            i++;
        }
        pat = "";
        for(string s:res){
             pat=pat+'/'+s;
        }
        if(pat == "") return "/";
        return pat;
    }
};
