/**
 * @param {string} s
 * @return {number}
 */
var firstUniqChar = function(s) {
    let obj={}
    for(let i=0;i<s.length;i++){
        if(obj[s[i]] == undefined) obj[s[i]]=i;
        else obj[s[i]] = "dupli"
    }
    for(let char in obj){
        if(obj[char] !="dupli") return obj[char] 
    }
    return -1
};