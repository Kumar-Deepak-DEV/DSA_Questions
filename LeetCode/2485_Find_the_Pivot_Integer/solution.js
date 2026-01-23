/**
 * @param {number} n
 * @return {number}
 */
var pivotInteger = function(n) {
    let sum= n*(n+1)/2;
    let nums = n;

    while(sum>=nums){
        if(sum==nums) return n;
        else{
            n--;
            nums+=n;
            sum=n*(n+1)/2
        }
    }
    return -1
};