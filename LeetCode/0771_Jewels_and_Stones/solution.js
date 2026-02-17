/**
 * @param {string} jewels
 * @param {string} stones
 * @return {number}
 */
var numJewelsInStones = function(jewels, stones) {
    let jew={}
    let stone={}
    for(let i=0;i<jewels.length; i++){
        jew[jewels[i]]= (jew[jewels[i]] || 0)+1
    }
    for(let i=0;i<stones.length; i++){
        stone[stones[i]]= (stone[stones[i]] || 0)+1
    }
    let count=0;
    for(let char in jew){
        if(stone[char] == undefined) continue;
        else  count+=stone[char]
    }
    return count;
};