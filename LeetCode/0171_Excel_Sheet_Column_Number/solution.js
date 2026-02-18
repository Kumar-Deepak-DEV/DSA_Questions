/**
 * @param {string} columnTitle
 * @return {number}
 */
var titleToNumber = function(columnTitle) {
    let count=0;
    for(let i=0;i<columnTitle.length;i++){
        let num=columnTitle.charCodeAt(i)-64;
        console.log(num)
        count = count*26+num
    }
    return count;
};