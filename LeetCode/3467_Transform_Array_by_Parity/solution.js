/**
 * @param {number[]} nums
 * @return {number[]}
 */
var transformArray = function(nums) {
    for(let i=0;i<nums.length;i++){
        if(nums[i]%2==0) nums[i]=0
        else nums[i]=1
    }
    let i=0;
    let j= nums.length-1;
    while(i<j){
        if(nums[i]==1){
            [nums[i],nums[j]]=[nums[j],nums[i]];
            j--;
        }
        else i++
    }

    // instead of using existing array, we could have used a new array, buut this one gives space complexity o(1); and keeps the time complexity lower too...

    return nums;
};