class Solution {
public:
    double myPow(double x, int n) {
        if (n<0){
            x = 1 /x;
        }
        else if (n==0)
            return 1;
    return cal(x,n);
    }
    
private:
    double cal(double x,int n){
        if(x==1||n==1||n==-1)
            return x;
        double cc = cal(x,n/2);
        if(n%2==0)
            return cc*cc;
        else
            return cc*cc*x;
    }
};