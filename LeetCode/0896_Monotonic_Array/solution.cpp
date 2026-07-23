class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
    //     int n=nums[0]-nums[1];
    // for(int i=0;i<nums.size()-1;i++){
    //     if(n==0) {
    //         n=nums[i+1]-nums[i+2];
    //     }
    //     else if(n>0)    
    //     {if(nums[i]-nums[i+1]<0)  return false;}
    //     else 
    //     {if(nums[i]-nums[i+1]>0)  return false;}
    // }
    if(nums.size()<=2)return true;
    int k = nums[0]-nums[1];
    for(int i = 0; i< nums.size() - 1; i++){
        if(k == 0) k = nums[i]-nums[i+1];
        else {
            int n = nums[i]-nums[i+1];
            if((k <0 && n>0) || (k > 0 && n < 0) )return false;
        }
    }
    return true;
    }
};