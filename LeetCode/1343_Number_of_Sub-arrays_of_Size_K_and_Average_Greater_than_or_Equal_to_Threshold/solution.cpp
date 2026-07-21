class Solution {
public:

    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int ans=0;
        int i = 0;
        int j = 0;
        double res;
        double sum = 0;
        for (; i < k; i++)
            sum += arr[i];
        res = sum / k;
        if(res>=threshold)ans++;
        for (; i < arr.size(); i++) {
            sum -= arr[j];
            sum += arr[i];
            res = sum / k;
            if(res>=threshold)ans++;
            j++;
        }
        return ans;
    }
};