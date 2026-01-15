/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
    let one = {};
    let two ={};
    if(s.length!== t.length) return false
    for(let i=0;i<s.length;i++){
        one[s[i]] = (one[s[i]] || 0)+1
        two[t[i]] = (two[t[i]] || 0)+1
    }
    for(let char in one){
        if(one[char] != two[char]) {
            console.log(one[char], two[char])
            return false
        }
    }
    return true
};