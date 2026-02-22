/**
 * @param {number} n
 * @return {number}
 */
var binaryGap = function(n) {
    let b=1;
    let s=""
    while(b<=n){
        b*=2
    }
    b/=2;
    while(b>=1){
        if(n>=b) {
            s+="1"
            n-=b;
            b/=2;
        }
        else {
            s+="0";
            b/=2;
        }
    }
    let prev=0;
    let max=0;
    for(let i=1;i<s.length;i++){
        let temp=0;
        if(s[i]==1){
            temp=i-prev
            prev=i;
        }
        if(max<temp)max=temp;
    }
    return max;
};