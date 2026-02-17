/**
 * @param {number} num
 * @return {number}
 */
var countDigits = function(num) {
    let count=0;
    let n=num;
    while(n>0){
        let a = n%10;
        n=n-a;
        n/=10;
        if(num%a==0) count++;
    }
    return count;
};