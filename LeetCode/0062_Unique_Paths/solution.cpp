class Solution {
public:
    int uniquePaths(int m, int n) {
        int x = m+n-2;
        int r = m-1>n-1? n-1:m-1;
        long long int ans =1;
        for(int i=1; i<=r;i++){
            ans =ans* (x-r+i)/i;  // we are using permutations to solve this question
        }
        return ans;
    }
};