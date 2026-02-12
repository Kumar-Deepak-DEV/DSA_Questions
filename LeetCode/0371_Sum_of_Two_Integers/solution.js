/**
 * @param {number} a
 * @param {number} b
 * @return {number}
 */

var getSum = function(a, b) {
    if(a==0 && b!=0)return b;
    if(a!=0 && b==0)return a;
    if(a==0 && b==0)return 0;

    let m = a/b;

    let n = (b*(1+m));
    if(Math.ceil(n)-n<0.5) n=Math.ceil(n)
    else n=Math.floor(n)
    return n;
};