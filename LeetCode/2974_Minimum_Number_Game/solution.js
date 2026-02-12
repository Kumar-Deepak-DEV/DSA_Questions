/**
 * @param {number[]} nums
 * @return {number[]}
 */
var numberGame = function(nums) {
    let num=nums.sort((a,b)=>a-b);
    let res=[];
    for(let i=0;i<num.length;i+=2){
        let a=num[i]
        let b=num[i+1]
        res.push(b)
        res.push(a)
    }
    return res
};