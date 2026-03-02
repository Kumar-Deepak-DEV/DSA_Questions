/**
 * @param {number} n
 * @return {boolean}
 */
var isHappy = function(n) {
    if(n==1 || n==7)return true;
    while (n>9){
        let num=n;
        let sum = 0;
        while(num>0){
            let a = num%10;
            sum +=a*a;
            num=Math.floor(num/10); 
        }
        if(sum ==1 || sum==7) return true;
        else if(sum<10)return false;
        else n = sum;
    }
    return false;
};