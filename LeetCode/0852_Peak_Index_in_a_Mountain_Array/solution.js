/**
 * @param {number[]} arr
 * @return {number}
 */
var peakIndexInMountainArray = function(arr) {
    let i=0;
    let j=arr.length-1;
    let m;
    while(i<=j){
        let mid= Math.floor(i)
        if(arr[mid]<arr[mid+1]) i=mid+1;
        else if(arr[mid]<arr[mid-1])j=mid-1;
        else {
            m=mid
            break
        }
    }
    return m;
};