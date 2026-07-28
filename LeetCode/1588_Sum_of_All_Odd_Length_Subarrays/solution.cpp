class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0;
        for (int k = 0; k < arr.size(); k += 2) {
            int j = 0;
            int sumx = 0;
            for (int i = 0; i < arr.size(); i++) {
                if (i <= k) {
                    sumx += arr[i];
                    if (i == k)
                        sum += sumx;
                } else {
                    sumx = sumx - arr[j] + arr[i];
                    sum += sumx;
                    j++;
                }
            }
        }
        return sum;
    }
};