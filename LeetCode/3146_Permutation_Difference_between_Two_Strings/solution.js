/**
 * @param {string} s
 * @param {string} t
 * @return {number}
 */
var findPermutationDifference = function(s, t) {
    let obj1={}
    let obj2={}
    for(let i=0;i<s.length;i++){
        obj1[s[i]]=(obj1[s[i]] || 0)+i
        obj2[t[i]]=(obj2[t[i]] || 0)+i
    }
    let sum=0;
    for(let char in obj1){
        sum+=Math.abs(obj1[char]-obj2[char])
    }
    return sum
};