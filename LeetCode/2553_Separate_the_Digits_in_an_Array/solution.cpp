class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> v;
        for(int i= 0; i< nums.size();i++){
            vector <int> k;
            while(nums[i]>0){
                int a = nums[i]%10;
                k.push_back(a);
                nums[i]/=10;
            }
            for(int l = k.size()-1; l >= 0; l--) v.push_back(k[l]);
        }
        return v;
    }
};