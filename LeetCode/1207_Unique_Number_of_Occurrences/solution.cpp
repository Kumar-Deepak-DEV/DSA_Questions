class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map <int,int>m;
        unordered_set <int>s;
        for(int i = 0; i<arr.size();i++){
            m[arr[i]]++;
        }
        for(const auto &p:m){
            if(!s.count(p.second)) s.insert(p.second);
            else return false;
        }
        return true;
    }
};