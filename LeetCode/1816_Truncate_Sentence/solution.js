/**
 * @param {string} s
 * @param {number} k
 * @return {string}
 */
var truncateSentence = function(s, k) {
    let m=s.trim();
    let n=""
    let temp=""
    let count=0;
    for(let i=0;i<m.length;i++ ){
        if(s[i]!=" ")temp+=m[i];
        if(s[i]==" "&&s[i-1]!=" "){
            n+=temp;
            temp=" "
            count++;
            if(count==k) break;
        }
        else if(s[i]!=" " && i==m.length-1) {
            n+=temp;
            temp=" "
            count++;
        }
    }
    return n;
};