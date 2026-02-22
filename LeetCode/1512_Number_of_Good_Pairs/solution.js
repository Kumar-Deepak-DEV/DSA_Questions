/**
 * @param {number[]} nums
 * @return {number}
 */
var numIdenticalPairs = function(nums) {
    let obj={};
    for(let i=0;i<nums.length;i++){
        obj[nums[i]]=(obj[nums[i]] || 0)+1
    }
    let res=0;
    for(let char in obj){
        let n=obj[char];
        n=n*(n-1)/2
        res+=n;
    }
    return res;
};