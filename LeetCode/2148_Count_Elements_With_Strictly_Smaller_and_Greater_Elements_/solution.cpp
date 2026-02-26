class Solution {
public:
    int countElements(vector<int>& nums) {
        if(nums.size()<3) return 0;
        sort(nums.begin(),nums.end());
        int a=nums[0];
        int b = nums[nums.size()-1];
        if(a==b)return 0;
        int i=0;
        int j=nums.size()-1;
        
        while(nums[i]==a) i++;

        while(nums[j]==b)j--;

        if(i<=j) return (j-i)+1;
        return 0;
    }
};