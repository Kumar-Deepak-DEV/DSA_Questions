/**
 * @param {string} s
 * @return {number}
 */
var countKeyChanges = function(s) {
    let count=0;
    for(let i=0;i<s.length-1;i++){
        let temp=Math.abs((s.charCodeAt(i)-s.charCodeAt(i+1)))
        if(temp==32 || temp==0) continue;
        count++;
    }
    return count;
};