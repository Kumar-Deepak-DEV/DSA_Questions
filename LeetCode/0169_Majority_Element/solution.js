/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function(nums) {
    let obj = {}
    for(let i=0;i<nums.length; i++){
        obj[nums[i]]=(obj[nums[i]] || 0)+1
    }
    for(let char in obj){
        if(obj[char]>nums.length/2) return Number(char);
    }
};