/**
 * @param {string} s
 * @param {number} k
 * @return {string}
 */
var reverseStr = function(s, k) {
    let i=0;
    s=s.split("")
    while(i<s.length){
        for(let m=0;m<k/2;m++){
            [s[i+m],s[i+k-m-1]] = [s[i-m+k-1],s[i+m]]
        }
        i+=2*k;
    }
    s=s.join("");
    return s
};