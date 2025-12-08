/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function(nums) {
    for(let i=0;i<nums.length;i++){
        let a =true;
        for(let j=0; j<nums.length;j++){
            if(i==j) continue;
            if(nums[i]==nums[j])
                a = false;
        }
        if(a) return nums[i]
    }
};
