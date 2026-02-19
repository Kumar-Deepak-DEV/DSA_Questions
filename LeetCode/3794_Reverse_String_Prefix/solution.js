/**
 * @param {string} s
 * @param {number} k
 * @return {string}
 */
var reversePrefix = function(s, k) {
    let res="";
    for(let i=0;i<s.length;i++){
        if(i<k) res=s[i]+res
        else res+=s[i]
    }
    return res
};