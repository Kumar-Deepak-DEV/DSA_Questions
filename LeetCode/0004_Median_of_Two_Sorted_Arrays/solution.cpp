class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>n = nums1;
        n.insert(n.end(), nums2.begin(), nums2.end());
        sort(n.begin(),n.end());
        if(n.size()%2==0){
            return (float)(n[n.size()/2]+n[n.size()/2 -1])/2;
        }
        return n[n.size()/2];
    }
};