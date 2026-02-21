/**
 * @param {number[]} order
 * @param {number[]} friends
 * @return {number[]}
 */
var recoverOrder = function(order, friends) {
    let arr=new Array(friends.length);
    let obj={}
    for(let i =0; i<order.length;i++){
        let left =0;
        let right =friends.length-1;
        while(left<=right){
            let mid=Math.floor((left+right)/2);
            if(friends[mid]==order[i]){
                obj[i]=friends[mid];
                break;
            }
            else if(friends[mid]>order[i]) right=mid-1
            else left =mid+1
        }
    }
    console.log(obj)
    let n=0
    for(let char in obj){
        arr[n]=obj[char]
        n++;
    }
    return arr;
};