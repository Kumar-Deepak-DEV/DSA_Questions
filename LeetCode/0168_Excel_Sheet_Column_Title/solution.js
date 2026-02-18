/**
 * @param {number} columnNumber
 * @return {string}
 */
var convertToTitle = function(columnNumber) {
    let news="";

    while(columnNumber>0){
        let m = columnNumber%(26)
        if(m==0) {
            news = "Z"+news
            columnNumber-=26
            }
        else
        news = String.fromCharCode(64+m) + news
        columnNumber -= m;
        columnNumber /= 26;
    }
    return news
};