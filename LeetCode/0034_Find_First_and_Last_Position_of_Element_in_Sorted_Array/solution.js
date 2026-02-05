/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var searchRange = function(nums, target) {
    let first=-1;
    let second =-1;
    let i=0;
    let j=nums.length-1;
    let mid=-1;
    while(i<=j){
        mid=Math.floor((i+j)/2);
        if(nums[mid]==target) break;
        else if(target>nums[mid]) i=mid+1;
        else j=mid-1;
    }
    if(nums[mid]==target){
        first=mid;
        second=mid;
    }
    while(nums[first-1]==target) first--;
    while(nums[second+1]==target) second++;

    return [first,second]
};