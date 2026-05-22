class Solution {
public:
    bool isGood(vector<int>& nums) {
        unordered_set <int> check;
        int max = *max_element(nums.begin(),nums.end());
        if(nums.size()!=max+1)return false;
        int count = 0;
        for(int a:nums){
            if(a == max) {
                count++;
                if(count>2) return false;
            }
            else{
                if(check.count(a)==1) return false;
            }
                check.insert(a);
        }
        return true;
    }
};