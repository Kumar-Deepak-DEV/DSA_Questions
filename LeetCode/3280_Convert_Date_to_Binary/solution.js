/**
 * @param {string} date
 * @return {string}
 */
var convertDateToBinary = function (date) {
    function bin(n) {
        let b = 1;
        let s = ""
        while (b <= n) {
            b *= 2
        }
        b /= 2;
        while (b >= 1) {
            if (n >= b) {
                s += "1"
                n -= b;
                b /= 2;
            }
            else {
                s += "0";
                b /= 2;
            }
        }
        return s;
    }
    let year=Number(date[0]+date[1]+date[2]+date[3])
    let day=Number(date[8]+date[9])
    let month=Number(date[5]+date[6])
    year=bin(year)
    day=bin(day)
    month=bin(month)

    let s=`${year}-${month}-${day}`
    return s;
};