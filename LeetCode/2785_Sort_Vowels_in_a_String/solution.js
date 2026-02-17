/**
 * @param {string} s
 * @return {string}
 */
var sortVowels = function (s) {
    let arr = [];
    let res = ""
    for (let i = 0; i < s.length; i++) {
        if (s[i] == "a" || s[i] == "e" || s[i] == "i" || s[i] == "o" || s[i] == "u" ||
            s[i] == "A" || s[i] == "E" || s[i] == "I" || s[i] == "O" || s[i] == "U") {
            arr.push(s[i]);
        }
    }

    arr = arr.sort();
    let j = 0

    for (let i = 0; i < s.length; i++) {
        if (s[i] == "a" || s[i] == "e" || s[i] == "i" || s[i] == "o" || s[i] == "u" ||
            s[i] == "A" || s[i] == "E" || s[i] == "I" || s[i] == "O" || s[i] == "U") {
            res += arr[j];
            j++;
        }
        else res += s[i]
    }

return res;
};