/**
 * @param {number[]} nums
 * @return {number[]}
 */
var findDuplicates = function(nums) {
    let obj ={};
    let arr=[];
    for (let i=0;i<nums.length;i++){
        if(obj[nums[i]]==undefined) obj[nums[i]]=1;
        else if(obj[nums[i]]==1){
            arr.push(nums[i]);
            obj[nums[i]]=2;
        }
    }
    return arr;
};