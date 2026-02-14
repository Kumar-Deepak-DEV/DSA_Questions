/**
 * @param {number} n
 * @param {number} start
 * @return {number}
 */
var xorOperation = function(n, start) {
    let arr=[];
    let ans;
    for(let i=0;i<n;i++){
        arr[i]=start + 2 * i;
        if(i==0) ans=arr[0];
        else ans=ans^arr[i]
    }
    return ans;
};