/**
 * @param {number} num
 * @return {number}
 */
var addDigits = function(num) {
    let j=0;
    let n=num
    while(n>=10){
        j+=num%10;
        console.log(j)
        num=Math.floor(num/10)
        console.log(num)
        console.log(n)
        if(num==0) {
            num=j;
            n=j;
            j=0;
        }
    }
        return n;
};