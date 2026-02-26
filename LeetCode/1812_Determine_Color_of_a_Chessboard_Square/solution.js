/**
 * @param {string} coordinates
 * @return {boolean}
 */
var squareIsWhite = function(coordinates) {
    let a = coordinates.charCodeAt(0);
    let b=Number(coordinates[1]);
    if((a%2==0 && b%2==1) || (a%2==1 && b%2==0)) return true;
    else return false;
};