/**
 * @param {number} n
 * @return {number}
 */
var alternateDigitSum = function(n) {
    let m=n;
    let sum=0;
    m=String(m);
    for(let i=0;i<m.length;i++){
        if(i%2==0){
            sum+=Number(m[i])
        }
        else sum-=Number(m[i])
    }
    return sum
};