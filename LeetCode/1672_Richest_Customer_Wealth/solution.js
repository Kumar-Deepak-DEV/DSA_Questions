/**
 * @param {number[][]} accounts
 * @return {number}
 */
var maximumWealth = function(acc) {
    let max=0;
    for(let i=0;i<acc.length;i++){
        let temp=0;
        for(let j=0;j<acc[i].length;j++){
            temp+=acc[i][j]
        }
        if(temp>max)max=temp;
    }
    return max
};