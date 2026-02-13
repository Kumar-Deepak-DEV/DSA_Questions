/**
 * @param {number[]} nums
 * @return {number[]}
 */
var sortArrayByParity = function(nums) {
    let i=0;
    let j=nums.length-1;
    while(i<j){
        if(nums[i]%2==1){
            [nums[i],nums[j]]=[nums[j],nums[i]];
            j--;
        }
        else i++;
    }
    return nums
};