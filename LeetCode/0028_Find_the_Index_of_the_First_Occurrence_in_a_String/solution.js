/**
 * @param {string} haystack
 * @param {string} needle
 * @return {number}
 */
var strStr = function(haystack, needle) {
    let count =-1;
    if(haystack.length < needle.length) return count
    let i=0;
    let j=0;
    while (j<=haystack.length){
        if(needle[i]==haystack[j]){
            if(i==0) {count = j};
            
            if(i==needle.length-1) break;
            // console.log(count);
            i++
        }
        else {
            j = j-i
            i=0
            count =-1;
            };
        j++
    }
    return count
};