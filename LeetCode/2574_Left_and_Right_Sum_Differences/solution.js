/**
 * @param {number[]} nums
 * @return {number[]}
 */
var leftRightDifference = function(nums) {
    let count=0;
    let left=0;
    let right=0;
    let leftArr=[];
    let rightArr = new Array(nums.length)
    while(count<nums.length){
        leftArr.push(left)
        rightArr[nums.length-1-count] = right
        left+=nums[count];
        right+=nums[nums.length-1-count];
        count++;
    }
    for(let i=0;i<leftArr.length;i++){
        leftArr[i] = Math.abs(leftArr[i]-rightArr[i])
    }
    return leftArr;
};