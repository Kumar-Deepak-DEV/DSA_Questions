class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int count=0;
        // for(int i=0;i<nums2.size();i++){
        //     nums2[i]*=k;
        //     for(int j=0;j<nums1.size();j++){
        //         if(nums1[j]%nums2[i]==0) count++;
        //     }
        // }
        for(int i=0;i<nums1.size();i++){
            if(nums1[i]%k!=0) continue;
            nums1[i]/=k;
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]%nums2[j]==0) count++;
            }
        }
        return count;
    }
};