/**
 * @param {number[]} nums
 * @return {string}
 */
var triangleType = function(nums) {
    if(Math.abs(nums[0]-nums[1]) >=nums[2] || Math.abs(nums[1]-nums[2]) >=nums[0] || Math.abs(nums[2]-nums[0]) >=nums[1] ) return "none"
    if(nums[0]+nums[1] <=nums[2] || nums[1]+nums[2] <=nums[0] || nums[2]+nums[0] <=nums[1] ) return "none"

    if(nums[1]==nums[2] && nums[2]==nums[0]) return "equilateral";
    else if(nums[1]!=nums[2] && nums[2]!=nums[0] && nums[0]!=nums[1]) return "scalene";
    else return "isosceles"
};