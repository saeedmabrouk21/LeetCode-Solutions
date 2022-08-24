class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0)
            return false;
        double z =log2(n) / log2(3);
        int zz=(int)z;
        cout <<setprecision(13)<<z<<zz;
        if(abs(zz-z)<.0000000001)
            return true;
        return false;
    }
};