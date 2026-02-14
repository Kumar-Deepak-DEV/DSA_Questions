/**
 * @param {number} n
 * @param {number} m
 * @return {number}
 */
var differenceOfSums = function(n, m) {
    let a=n*(n+1)/2;
    let b=Math.floor(n/m);
    b=(b+1)*b*m; // here used ap =>  (n/2(2a+(n-1)d))*2 last 2 was to subtract that number twice, a=0, n=b+1;
    return a-b;
};