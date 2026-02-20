/**
 * @param {string} s
 * @return {boolean}
 */
var isNumber = function(s) {
    if(s== 'Infinity' || s=='+Infinity' || s== '-Infinity') return false
    if(s.indexOf('x')!==-1 || s.indexOf('X')!==-1 || s.indexOf("a")!==-1 || s.indexOf("b")!==-1 || s.indexOf("c")!==-1 || s.indexOf("d")!==-1 || s.indexOf("f")!==-1) return false
    let num=Number(s)-1
    let num2=s-1
    if(num==num2) return true
    else return false
};