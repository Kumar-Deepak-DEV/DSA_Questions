/**
 * @param {string} s
 * @return {number}
 */
var myAtoi = function(s) {
    if(s.length>200) return 0;
    var arr =[];
    s=s.trim();
    s = [...s];
    for (let i = 0; i < s.length; i++) {
    let element = s[i];
    if ((element == "-" || element == "+") && arr.length==0) arr.push(element);
    else if (element >= '0' && element <= '9') arr.push(element);
    else break; } // this works here


    if(arr.length === 0 ||(arr.length ==1 && (arr[0]=="-" || arr[0] == "+"))) return 0;
    if (arr[0]=="+") arr = arr.splice(1);
    arr =Number(arr.join(""));
    if(arr<-2147483648) return -2147483648  
    if (arr>=2147483647) return 2147483647
    else
    return arr;
};