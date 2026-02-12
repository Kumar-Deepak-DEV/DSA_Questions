/**
 * @param {string} s
 * @return {string}
 */
var replaceDigits = function(s) {
    let str=""
    for(let i=0;i<s.length;i++){
        if(i%2==0)str+=s[i]
        else{
            let num=s.charCodeAt(i-1)
            num+=Number(s[i]);
            let t=String.fromCharCode(num)
            str+=t
        }
    }
    return str;
};