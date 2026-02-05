/**
 * @param {string} s
 * @return {string}
 */
var reverseVowels = function(s) {
    let vowels = ["a","e","i",'o','u',"A",'E','I','O','U'];
    let i=0;
    s = s.split("");
    let j=s.length-1;
    while(i<j){
        if(s[i]!="a" && s[i]!="e" && s[i]!= "i" && s[i]!= 'o' && s[i]!= 'u' && s[i]!= "A" && s[i]!= 'E' && s[i]!= 'I' && s[i]!= 'O' && s[i]!= 'U') {
            i++; 
            continue;
        }
        else if(s[j]!="a" && s[j]!="e" && s[j]!= "i" && s[j]!= 'o' && s[j]!= 'u' && s[j]!= "A" && s[j]!= 'E' && s[j]!= 'I' && s[j]!= 'O' && s[j]!= 'U'){
            j--; 
            continue;
        }
        else {
            [s[i],s[j]] = [s[j],s[i]];
            i++;
            j--
        }
    }
    s=s.join("");
    return s
};