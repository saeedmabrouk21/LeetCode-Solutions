class Solution {
public:
    int hammingWeight(uint32_t n) {
        int i = 0 ;
        cout <<n;
        while(n!=0){
            if(n%2==1)
                i++;
            n=n/2;
        }
        return i;
    }
};