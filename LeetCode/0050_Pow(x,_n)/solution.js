/**
 * @param {number} x
 * @param {number} n
 * @return {number}
 */var myPow = function(x, n) {
    if(n<0){
        x = 1/x;
        n = n*-1
    }
    let a = x
    let m=1;
    if(n==0) return 1;
    if(n==1) return a
    while(n>1){
        if(n%2==0){
            x*=x;
            n/=2;
        }
        else {
            m*=x;
            n--;
            console.log(m);
        }
    }
    return x*m
};