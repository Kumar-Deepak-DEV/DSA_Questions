/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function(s) {
    s=s.toLowerCase();
    let str="";
    for(let i=0;i<s.length;i++){
        if((s[i]>="a" && s[i]<="z") || (s[i]>="0" && s[i]<=9)){
            str+=s[i]
        }
    }
    console.log(str)
    j=str.length-1
    for(let i=0;i<=str.length/2;i++){
        if(str[i]!=str[j]) return false;
        j--;
    }
    return true;
};