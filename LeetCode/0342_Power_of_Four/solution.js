/**
 * @param {number} n
 * @return {boolean}
 */
var isPowerOfFour = function(n) {
    if(n<0) return false
    let j = 0;
    while(j<=n){
        if(4**j == n) return true
        if(4**j >n ) return false
        j++;
    }
};