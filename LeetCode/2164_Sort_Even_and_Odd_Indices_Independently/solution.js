/**
 * @param {number[]} nums
 * @return {number[]}
 */
var sortEvenOdd = function(nums) {
    let arr1=[];
    let arr2=[];
    for(let i=0;i<nums.length;i++){
        if(i%2==0)arr1.push(nums[i])
        else arr2.push(nums[i]);
    }
    arr1=arr1.sort((a,b)=>a-b)
    arr2=arr2.sort((a,b)=>b-a)
    let j=0;
    for(let i=0;i<nums.length;i++){
        if(i%2==0) nums[i]=arr1[j]
        else {
            nums[i]=arr2[j]
            j++;
        }
    }
    return nums
};