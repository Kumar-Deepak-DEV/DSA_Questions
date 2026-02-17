/**
 * @param {string} s
 * @return {number}
 */
var maxFreqSum = function(s) {
    let obj1={}
    let obj2={}
    for(let i=0; i<s.length;i++){
        if(s[i] == "a" || s[i] == "e" || s[i] == "i" || s[i] == "o" || s[i] == "u") obj1[s[i]] = (obj1[s[i]] || 0)+1;
        else obj2[s[i]] = (obj2[s[i]] || 0)+1;
    }
    let temp=0
    let res=0;
    for(let i in obj1){
        if(obj1[i]>temp){
            temp=obj1[i];
        }
    }
    res+=temp
    temp =0;
    for(let i in obj2){
        if(obj2[i]>temp){
            temp=obj2[i];
        }
    }
    res+=temp
    return res;
};