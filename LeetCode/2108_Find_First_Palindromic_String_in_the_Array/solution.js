/**
 * @param {string[]} words
 * @return {string}
 */
var firstPalindrome = function(words) {
    for(let i=0;i<words.length;i++){
        let l=0;
        let r=words[i].length-1
        while(l<r){
            if(words[i][l]!=words[i][r]) break;
            l++;
            r--;
        }
        if(l>=r) return words[i]
    }
    return ""
};