/**
 * @param {number} n
 * @return {boolean}
 */
var isPowerOfThree = function(n) {
    // let r = n.toString(3);
     if(n<=0)
            return false;
        let z =Math.log10(n) / Math.log10(3);

        return (z%1 ==0)
    // return false;
    
};