class Solution {
public:
    int maxVowels(string s, int k) {
        int count=0;
        unordered_set<char> sets = {'a','e','i','o','u'};
        for(int i = 0;i<k;i++){
            if(sets.count(s[i])) count++;
        }
        int maxi = count;
        for(int i = k;i<s.size();i++){
            if(sets.count(s[i-k])) count--;
            if(sets.count(s[i]))count++;
            maxi = max(count,maxi);
        }
        return maxi;
    }
};