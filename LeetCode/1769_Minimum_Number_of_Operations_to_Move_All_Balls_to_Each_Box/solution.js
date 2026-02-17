/**
 * @param {string} boxes
 * @return {number[]}
 */
var minOperations = function(boxes) {
    let arr=[];
    for(let i=0;i<boxes.length;i++){
        let box = boxes.split("");
        let temp=0;
        
        for(let j=0;j<i;j++){
            temp+=Number(box[j])
            box[j+1]=String(Number(box[j+1])+Number(box[j]))
        }
        for(let j=box.length-1;j>i;j--){
            temp+=Number(box[j])
            
            box[j-1]=String(Number(box[j-1])+Number(box[j]))
        }
        
        arr.push(temp)
        
    }
    
    return arr;
};