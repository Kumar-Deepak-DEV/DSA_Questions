/**
 * @param {number} n
 * @return {number}
 */
var countPrimes = function(n) {
    let arr=[2];
    if(n<=2)return 0;
    for(let i=3; i<n;i=i+2){
        let prime=true;
        for(let j=0;arr[j]<=Math.sqrt(i);j++){
            if(i%arr[j]==0) {
                prime =false;
                break;
            }
        }
        if(prime){
            arr.push(i)
        }
    }
    return arr.length;
};