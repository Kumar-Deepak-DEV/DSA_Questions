/**
 * @param {number} dividend
 * @param {number} divisor
 * @return {number}
 */
var divide = function(dividend, divisor) {
    let n=0;
    if(dividend>=0&& divisor<=0){
        divisor*=-1;
        n=1;
    }
    else if(dividend<0 && divisor>0){
        dividend*=-1;
        n=1;
    }
    else if(dividend<0  && divisor<0){
        dividend *=-1;
        divisor*=-1;
    }
    let temp = divisor;
    let count=0;
    while(dividend>=divisor){
        if(temp<dividend){
            temp*=2;
        }
        else if(temp==dividend){
            count+=(temp/divisor);
            dividend-=temp;
            temp=divisor;
        }
        else {
            count+=(temp/divisor)/2;
            dividend-=temp/2;
            temp=divisor;
        }
    }
    if(n==1 && count>2147483648) return -2147483648
    else if(n==1) return count*=-1
    else if(count>2147483647) return 2147483647;
    else return count
};