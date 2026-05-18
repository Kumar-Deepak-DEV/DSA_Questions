class Solution {
public:
    int xorOperation(int n, int start) {
        int arr;
        int ans = start;
        for (int i = 1; i < n; i++) {
            arr = start + 2 * i;
            if (ans == 0)
                ans = arr;
            else
                ans = ans ^ arr;
        }
        return ans;
    }
};