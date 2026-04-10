class Solution {
public:
    bool isValid(string s) {
    vector<char> temp;
    for(int i = 0; i<s.length();i++){
        if(s[i] == '{' || s[i]== '(' || s[i] == '[') temp.push_back(s[i]);
        else if(temp.size()==0 && (s[i]=='}' || s[i]==']' || s[i]==')')) return false;
        else{
            if(temp[temp.size()-1] == '{' && s[i]!='}') return false;
            else if(temp[temp.size()-1] == '(' && s[i]!=')') return false;
            else if(temp[temp.size()-1] == '[' && s[i]!=']') return false;
            else temp.pop_back();
            
        }
    }      
    if(temp.size()!=0) return false;  
    return true;
    
    }
};