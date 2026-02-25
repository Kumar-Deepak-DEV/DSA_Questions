/**
 * @param {number[]} arr
 * @return {number[]}
 */
var sortByBits = function (arr) {
    // use object, loops to convert tinto bits, then to store and then to sort/check...
    function baseCon(i, n) {
        let b = i;
        let s = ""
        while (n > 0) {
            let m = n % i;
            s = m + s;
            n = Math.floor(n / i);
        }
        return s;
    }
    let obj = {}
    let res = []

    for (let i = 0; i < arr.length; i++) {
        let val = baseCon(2, arr[i]);
        // console.log(val)
        let j = 0;
        let count = 0;
        while (j < val.length) {
            if (val[j] == '1') count++
            j++
        }
        if (obj[count] == undefined) obj[count] = []
        obj[count].push(arr[i]);
    }
    // console.log(obj)
    for(let char in obj){
        obj[char]=obj[char].sort((a,b)=>a-b)
        let j=0;
        while(j<obj[char].length){
            res.push(obj[char][j])
            j++
        }
    }
    return res
};