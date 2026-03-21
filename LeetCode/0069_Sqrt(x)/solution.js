/**
 * @param {number} x
 * @return {number}
 */
var mySqrt = function(x) {
    let i=1
    if(x==0|| x==1) return x
    for(; i<=x/2;i++){
        if (i*i>x) break;
        else if(i*i == x) return i
    }
    return i-1
};