class Solution {
public:
    bool isHappy(int n) {
        int slow = n;
        int fast =n;
        do{
         
            n= slow ;
            slow = 0;
            while(n!=0){
                slow = slow + (n%10)*(n%10);
                n=n/10;
            }

            n= fast;
            fast = 0;
            while(n!=0){
                fast = fast + (n%10)*(n%10);
                n=n/10;
            }

            n = fast;
            fast = 0;
            while(n!=0){
                fast = fast + (n%10)*(n%10);
                n=n/10;
            }
            if(fast ==1 )
                return true;
        }while(slow != fast );
      
        return false;
    }
};