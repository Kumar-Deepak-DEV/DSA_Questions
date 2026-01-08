/**
 * @param {number} n
 * @return {boolean}
 */
var isPowerOfTwo = function(n) {
    if(n<0) return false
    let j = 0;
    while(j<=n){
        if(2**j == n) return true
        if(2**j >n ) return false
        j++;
    }
};