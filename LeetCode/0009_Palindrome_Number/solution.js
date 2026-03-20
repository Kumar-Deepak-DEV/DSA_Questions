/**
 * @param {number} n
 * @return {boolean}
 */
var isPalindrome = function(n) {
    if(n<0) return false;
    var count = 0;
    n=String(n)
    for(let i=0;i<=n.length/2;i++ ){
        if(n[i]!=n[n.length-i-1])
            count =1;
    }
    if(count==1)return false;
    else return true;
};