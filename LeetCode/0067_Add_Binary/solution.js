/**
 * @param {string} a
 * @param {string} b
 * @return {string}
 */
var addBinary = function (a, b) {
    let res = "";
    let carry = 0;
    let i = a.length - 1;
    let j = b.length - 1;
    while (i >= 0 && j >= 0 || carry) {
        if (a[i] == 1) {
            if (b[j] == 1) {
                if (carry == 1) res = "1" + res;
                else res = '0' + res;
                carry = 1;
            }
            else {
                if (carry == 1) {
                    res = '0' + res;
                    carry = 1;
                }
                else {
                    res = "1" + res;
                    carry = 0;
                }
            }
        }
        else {
            if (b[j] == 1) {
                if (carry == 1) {
                    carry = 1
                    res = '0' + res;
                }
                else {
                    res = "1" + res;
                    carry = 0;
                }
            }
            else {
                if (carry == 1) res = "1" + res;
                else res = '0' + res;
                carry = 0;
            }

        }
        i--;
        j--;
        if (a == undefined && b == undefined && carry == 1) {
            res = "1" + res;
            carry = 0;
        }
    }
    while (j >= 0 && i < 0) {
        if (carry == 1) {
            if (b[j] == 1) {
                carry = 1;
                res = "0" + res
            }
            else {
                res = "1" + res;
                carry = 0
            }
        }
        else {
            res = b[j] + res;
        }
        j--;
    }
    while (i >= 0 && j < 0) {
        if (carry == 1) {
            if (a[i] == 1) {
                carry = 1;
                res = "0" + res
            }
            else {
                res = "1" + res;
                carry = 0;
            }
        }
        else {
            res = a[i] + res;
        }
        i--;
    }
    return res
};