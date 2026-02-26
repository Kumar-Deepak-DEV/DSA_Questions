/**
 * @param {string} s
 * @return {number}
 */
var numSteps = function (s) {
    /*

    lengthy  but easy to understand...


    function addBinary(a, b) {
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

    let count = 0;
    while(s.length>1){
        if(s[s.length-1]=="1") s=addBinary("1",s);
        else {
            let r="";
            for(let i=0;i<s.length-1;i++) r+=s[i]

            s=r;
        }
        count++;
    }
    return count;
    */

    
    let count =0;
    let carry=0;
    for(let i=s.length-1;i>=1;i--){
        let n=Number(s[i])
        if(n+carry == 1) {
            count+=2;
            carry=1; // n+carry=1; means its odd, then add 1 and then divide, which will leave a carry of 1 for next, and removing that integer behind... 
        }
        else if(n+carry==2){
            carry=1;
            count++ // here we will have sum 2, making digit 0 and carry 1->directly divide, no addition, no xtra steps...
        }
        else if(n+carry==0) count++; // just increase the step count
    }

    return count+carry; // adding bcoz in last section lets say it has 1 and a carry making it 2, then we will need to add 1, however its not fixed and totally depends on carry... and as we know we are adding carry indirectly as 1 if carry 1 and 0 if 0; return count + carry


};