/**
 * @param {number} num
 * @return {string}
 */
    var convertToBase7 = function(num) {
    let res=""
    let n=0;
    if(num<0){
        num*=-1;
        n=1
    }
    let quo=1;
    while(quo>0){
        let a = num%7;
        quo=Math.floor(num/7);
        res=a+res;
        num=quo;
    }
    if(n==1)res = "-"+res
    return res;
};