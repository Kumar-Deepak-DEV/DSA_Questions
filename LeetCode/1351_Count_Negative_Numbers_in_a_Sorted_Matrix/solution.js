/**
 * @param {number[][]} grid
 * @return {number}
 */
var countNegatives = function(grid) {
    let m =grid.length-1;
    let count=0;
    let n=0;
    for(let i=m;i>=0;i--){
        for(let j=grid[i].length-1;j>=n;j--){
            if(grid[i][j]>=0){
                n=j+1;
                break;
            }
            count++;
        }
    }
    return count;
};