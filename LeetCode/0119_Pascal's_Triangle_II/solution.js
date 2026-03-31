/**
 * @param {number} rowIndex
 * @return {number[]}
 */
var getRow = function(rowIndex) {
    let arr =[1];
    let newArr=[];
    for(let i= 0;i<=rowIndex;i++){
        for(let j=0;j<=i;j++){
            newArr[j]=(arr[j-1] || 0)+(arr[j] || 0)
        }        
        arr=newArr;
        newArr=[]
    }
    return arr
};