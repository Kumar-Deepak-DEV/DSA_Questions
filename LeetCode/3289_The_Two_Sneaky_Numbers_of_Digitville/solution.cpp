class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        map<int,int> m1;
        int store = 1e9;
        for(int i=0;i<nums.size();i++){
            if(!m1[nums[i]]) m1[nums[i]] = 1;
            else m1[nums[i]] +=1;
            if( store == 1e9 && m1[nums[i]] == 2) store = nums[i];
            else if(m1[nums[i]] == 2)return {nums[i],store};
        }
        return {0};
    }
};