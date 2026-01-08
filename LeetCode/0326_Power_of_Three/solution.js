/**
 * @param {number} n
 * @return {boolean}
 */
var isPowerOfThree = function(n) {
    if(n<0) return false
    let j = 0;
    while(j<=n){
        if(3**j == n) return true
        if(3**j >n ) return false
        j++;
    }
};