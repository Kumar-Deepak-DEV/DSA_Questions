/**
 * @param {number} n
 * @return {number}
 */
var maxProduct = function(n) {
    let m=n;
    m=String(m)
    let a=Number(m[0])
    let b=Number(m[1])
    for(let i=2;i<m.length;i++){
        if(a<b){
        if(Number(m[i])>a)a=Number(m[i])}
        else if (b<=a){
        if(Number(m[i])>b)b=Number(m[i])}
    }
    return a*b
};