/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(x) {
    
    var boo = false;
    if(x<0){
        boo = true;
        x *= -1;
    }
    x = Number(String(x).split('').reverse().join(''));
    if(boo) x *= -1;
    if(x>-2147483649 && x<2147483648){
    return x;}
    else return 0;
};