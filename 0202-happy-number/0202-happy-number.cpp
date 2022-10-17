class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> ab;
        return test(n,ab);
    }
    bool test (int a ,unordered_set<int>& ab){
        if(ab.count(a)==1)
            return false;
        ab.insert(a);
        if(a == 1 )
            return true;
       
        int x = 0 ;
        while(a!=0){
            x = x + (a%10)*(a%10);
            a=a/10;
        }
        cout <<x<<endl;
        return test(x,ab);
    }
};