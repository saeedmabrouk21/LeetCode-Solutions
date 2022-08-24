/**
 * @param {number} n
 * @return {boolean}
 */
var isPowerOfThree = function(n) {
    let r = n.toString(3);
    if(r.lastIndexOf(2)==-1 && r.lastIndexOf(1)==0 )
        return true;
    return false;
    
};