/**
 * @param {character[]} s
 * @return {void} Do not return anything, modify s in-place instead.
 */
var reverseString = function(s) {
    let j=0;
    while (j<s.length/2){
        [s[j],s[s.length-j-1]]=[s[s.length-j-1],s[j]]
        j++
    }
};