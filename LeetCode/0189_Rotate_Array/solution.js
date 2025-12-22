/**
 * @param {number[]} nums
 * @param {number} k
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var rotate = function(nums, k) {
    if(k>=nums.length) k = k%nums.length
    let newArr=nums.splice(nums.length-k,k)
    newArr = [...newArr,...nums]
    for(let i=0;i<newArr.length;i++ ){
        nums[i]=newArr[i];
    }
};