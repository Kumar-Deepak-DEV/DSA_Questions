/**
 * @param {string} word
 * @param {character} ch
 * @return {string}
 */
var reversePrefix = function(word, ch) {
    let n = 0;
    let res="";
    for(let i=0; i<word.length;i++){
        if(n==0 && word[i]!=ch ) res=word[i]+res;
        else if(n==0 && word[i]==ch) {
            n=1;
            res=word[i]+res;
        }
        else if(n==1) res=res+word[i]
    }
    if(n==1)return res;
    else return word;
};