/**
 * @param {number[]} nums
 * @return {number[]}
 */
var sortArrayByParityII = function(nums) {
    let res=[];
    let i=0;
    let j=1;
    for(let n=0; n<nums.length;n++){
        if(nums[n]%2==0){
            res[i]=nums[n];
            i+=2;
        }
        else {
            res[j]=nums[n];
            j+=2;
        }
    }
    return res
};