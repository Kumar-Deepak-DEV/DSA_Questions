class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int count=0;
        int num=0;
        int j=0;
        for(int i=1;i<=arr.size()+k;i++){
            if(i==arr[j]) {
                if(j<arr.size()-1)
                j++;
            }
            else {
                count++;
                if(count==k)return i;
            }
        }
        return 0;
    }
};