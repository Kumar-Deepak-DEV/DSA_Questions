class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int maxi = 1;
        int a = 1;
        for(int i = 1; i<arr.size();i++){
            if(arr[i]-maxi > 1 || arr[i]-maxi < -1 ) arr[i]=maxi+1;
            maxi=arr[i];
            if(a<maxi)a=maxi;
        }
        return a;
    }
};