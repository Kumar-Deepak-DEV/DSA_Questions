/**
 * @param {number} n
 * @return {number}
 */
var subtractProductAndSum = function(n) {
    let mult=1;
    let add=0;
    while(n>0){
        let a = n%10;
        mult*=a;
        add+=a;
        n-=a;
        n/=10;
    }
    return mult-add;
};