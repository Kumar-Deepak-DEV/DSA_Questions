/**
 * @param {number[]} nums
 * @param {number} n
 * @return {number[]}
 */
var shuffle = function(nums, n) {
    let arr1=[];
    let arr2=[];
    let res=[];
    let j=0

    for(let i=0;i<nums.length;i++){
        if(i<n)arr1.push(nums[i])
        else arr2.push(nums[i])
    }
    for(let i=0;i<2*n;i++){
        if(i%2==0) res.push(arr1[j])
        else {
            res.push(arr2[j])
            j++
        }
    }
    return res
};