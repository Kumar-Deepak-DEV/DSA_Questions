/**
 * @param {string} s
 * @param {string} t
 * @return {character}
 */
var findTheDifference = function(s, t) {
    let one = {};
    let two ={};
    for(let i=0;i<t.length;i++){
        if(i<t.length-1) one[s[i]] = (one[s[i]] || 0)+1
        two[t[i]] = (two[t[i]] || 0)+1
    }
    for(let char in two){
        if(two[char] != one[char]) {
            
            return char
        }
    }
};