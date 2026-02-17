/**
 * @param {string} sentence
 * @return {boolean}
 */
var checkIfPangram = function(sentence) {
    let obj={};
    if(sentence.length<26)return false
    for(let i=0;i<sentence.length;i++){
        if(obj[sentence[i]]==undefined)obj[sentence[i]]=1
    }
    for(let i=97;i<123;i++){
        let temp = String.fromCharCode(i)
        if(obj[temp]==undefined)return false
    }
    return true;
};