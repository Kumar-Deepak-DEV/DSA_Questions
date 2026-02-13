/**
 * @param {number[]} nums
 * @return {boolean}
 */
var isMonotonic = function(nums) {
    let n=nums[0]-nums[1];
    for(let i=0;i<nums.length-1;i++){
        if(n==0) {
            n=nums[i+1]-nums[i+2]
        }
        else if(n>0)    
        {if(nums[i]-nums[i+1]<0)  return false}
        else 
        {if(nums[i]-nums[i+1]>0)  return false}
    }
    return true
};