/**
 * @param {string[]} sentences
 * @return {number}
 */
var mostWordsFound = function (s) {

    let max=0;
    for (let i = 0; i < s.length; i++) {
        let temp = 0;
        for (let j = 0; j < s[i].length; j++) {
            if( (j==0 && s[i][j]!=" ") || (s[i][j]!=" " && s[i][j-1]==" ") ) temp ++;
        console.log(temp)
        }
        max=max>temp?max:temp;
    }
    return max;
};