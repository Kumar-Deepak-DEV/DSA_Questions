/**
 * @param {number} num
 * @return {boolean}
 */
var isPerfectSquare = function(num) {
    // if(num==1 ) return true
    // for(let i=1; i<=num/2; i++){
    //     if(i**2 == num) return true;
    // }
    // return false

    if(Math.floor(Math.sqrt(num)) == Math.sqrt(num)) return true
    return false
};