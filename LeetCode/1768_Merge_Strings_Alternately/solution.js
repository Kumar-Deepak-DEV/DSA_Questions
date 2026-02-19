/**
 * @param {string} word1
 * @param {string} word2
 * @return {string}
 */
var mergeAlternately = function(word1, word2) {
    let i=word1.length>word2.length?word1.length:word2.length;
    let res=""
    for(let j=0; j<i;j++){
        if(word1[j]!=undefined)res+=word1[j]
        if(word2[j]!=undefined)res+=word2[j]
    }
    return res;
};