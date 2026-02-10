/**
 * @param {number[][]} image
 * @return {number[][]}
 */
var flipAndInvertImage = function(image) {
    let m=image.length;
    for(let i=0;i<m;i++){
        for(let j=0;j<m/2;j++){
            [image[i][j],image[i][m-j-1]]=[image[i][m-j-1],image[i][j]];
        }
        for(let j=0;j<m;j++){
            if(image[i][j]==0)image[i][j]=1
            else image[i][j]=0
        }
    }
    return image;
};