/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {
    let space = 0;
    let count=0;
    for(let i=s.length-1;i>=0;i--){
        if(space==0 && s[i]==" "){
            continue;
        }
        else if(s[i]!=" "){
            space =1;
            count++;
        }
        else break;
    }
    return count;
};