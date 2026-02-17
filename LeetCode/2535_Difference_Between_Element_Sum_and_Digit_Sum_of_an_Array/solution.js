/**
 * @param {number[]} nums
 * @return {number}
 */
var differenceOfSum = function(nums) {
    let elemsum=0;
    let digsum=0;
    for(let i=0;i<nums.length;i++){
        elemsum+=nums[i];
        let a = nums[i];
        while(a>0){
            let m=a%10;
            digsum+=m;
            a=Math.floor(a/10);
        }
    }
    return Math.abs(elemsum-digsum);
};