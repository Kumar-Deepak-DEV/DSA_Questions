class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        map <int, int> m;
        if(arr.size()<3) return arr[0];
        for(int i = 0;i<arr.size();i++){
            if(!m[arr[i]])m[arr[i]]=0;
            m[arr[i]] ++;
            if(m[arr[i]] >arr.size()/4) return arr[i];
        }
        return arr[0];
    }
};