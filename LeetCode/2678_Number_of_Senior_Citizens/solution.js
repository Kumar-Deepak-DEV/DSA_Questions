/**
 * @param {string[]} details
 * @return {number}
 */
var countSeniors = function(details) {
    let count =0;
    for(let i=0;i< details.length;i++){
        let temp=details[i][11]+details[i][12]
        temp=Number(temp)
        if(temp>60)count++
    }
    return count;
};