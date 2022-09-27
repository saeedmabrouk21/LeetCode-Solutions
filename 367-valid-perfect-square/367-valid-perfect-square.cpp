class Solution {
public:
    bool isPerfectSquare(int num) {
        int start = 1;
        int end = num/2;
        if(num ==1 )
            end++;
        int mid;
        while(start <= end){
            mid = start + (end - start) /2;
            cout <<mid;
            if(mid * (double) mid ==(double)num)
                return true;
            if(mid * (double) mid > num){
                end= mid -1;
            
            }
            else {
                start = mid  +  1;
            }
            
        }
        return false;
    }
};