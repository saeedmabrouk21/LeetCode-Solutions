class Solution {
public:
    bool isPalindrome(int x) {
        int y = x;
        long int z=0;
        if(x<0)
            return false;
        while(y!=0){
            z= z*10 + y%10;
            //cout <<z;
            y/=10;  
        }
        if(z==x)
            return true;
        else 
            return false;
    }
private:
    
};