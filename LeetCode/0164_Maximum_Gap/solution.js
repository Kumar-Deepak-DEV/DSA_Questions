/**
 * @param {number[]} nums
 * @return {number}
 */
var maximumGap = function(nums) {
    let obj={};
    if(nums.length==1)return 0
    for(let i=0;i<nums.length;i++){
        obj[nums[i]] = 1;
    }
    let maxGap=0;
    let numArr=[];
    for(let char in obj){
        numArr.push(Number(char))
    }
        // console.log(numArr)
    for(let i=0;i<numArr.length-1;i++){
        let temp = numArr[i+1]-numArr[i]
        if(maxGap<temp) maxGap = temp
    }
    return maxGap;
};