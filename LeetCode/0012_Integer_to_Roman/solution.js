/**
 * @param {number} num
 * @return {string}
 */
var intToRoman = function(num) {
    var bag = "";
    var quo;
    var div = [1000,900,500,400,100,90,50,40,10,9,5,4,1];
    var dim = ['M','CM','D','CD','C','XC','L','XL','X','IX','V','IV','I']
    for(let i=0; i<div.length;i++){
        quo = Math.floor(num/div[i]);
        for(let j =0;j<quo; j++){
            bag= bag+dim[i];
        }
        num = num%div[i];
    }
    return bag;

};