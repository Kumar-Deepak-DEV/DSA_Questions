/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array}
 */
var chunk = function(arr, size) {
    let count =0;
    let res=[];
    let temp=[];
    for(let i=0;i<arr.length;i++){
        temp.push(arr[i]);
        count++;
        if(count == size || i== arr.length-1){
            res.push(temp);
            temp=[];
            count=0;
        }
    }
    return res;
};
