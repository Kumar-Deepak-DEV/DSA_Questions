/**
 * @param {number} area
 * @return {number[]}
 */
var constructRectangle = function(area) {
    if(area ==1) return [1,1]
    let arr=[];
    let num =Infinity;

    for(let i=1;i<=area/2;i++){
        if(area%i==0) {
            let sum = area/i - i
            
            if(Math.abs(sum) < num) {
                arr=[]
            arr.push(area/i);
            arr.push(i)
            num = Math.abs(area/i - i)
            }
        }
    }
    return arr;
};