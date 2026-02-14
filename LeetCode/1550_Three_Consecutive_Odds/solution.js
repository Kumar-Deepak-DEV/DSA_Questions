/**
 * @param {number[]} arr
 * @return {boolean}
 */
var threeConsecutiveOdds = function(arr) {
    for(let i=0;i<arr.length-2;i++){
        if(arr[i]%2==1) {
            if(arr[i+1]%2==0){
                i++;
                continue;
            }
            else if (arr[i+2]%2==0){
                i+=2;
                continue;
            }
            else return true;
        }
    }
    return false;
};