class Solution {
public:
    int maxProduct(vector<string>& words) {
        // int a = INT_MIN,b=INT_MIN;
        // for(string s : words){
        //     int len = s.size();
        //     if(len>a){
        //         b = a;
        //         a = len;
        //     }
        //     else if(len>b)b=len;
        // }
        // return a*b;

        int count = 0;
        for(int i = 0;i<words.size();i++){
            unordered_set<char> check;
            check.insert(words[i].begin(),words[i].end());
            
            for(int j = i+1;j<words.size();j++){
                bool match = false;

                for(char s : words[j]){
                    if(check.count(s)) {
                        match = true;
                        break;
                    }
                }
                if(!match) {
                    int pre = words[i].size()*words[j].size() ;
                    count = count>pre ? count : pre;
                }
            }
        }
        return count;

    }
};