/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var moveZeroes = function(nums) {
    let new2=[]
    for(let i=0;i<nums.length;i++){
        if(nums[i]!=0) new2.push(nums[i])
    }
    for(let i=0;i<nums.length;i++){
        if(i<new2.length) nums[i]=new2[i]
        else nums[i]=0;
    }
};