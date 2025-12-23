/**
 * @param {number} numRows
 * @return {number[][]}
 */
var generate = function(numRows) {

    let arr =[1];
    let newArr=[];
    let res=[]
    for(let i= 0;i<numRows;i++){
        for(let j=0;j<=i;j++){
            newArr[j]=(arr[j-1] || 0)+(arr[j] || 0)
        }        
        arr=newArr;
        res.push(newArr)
        newArr=[]
    }
    return res;
};