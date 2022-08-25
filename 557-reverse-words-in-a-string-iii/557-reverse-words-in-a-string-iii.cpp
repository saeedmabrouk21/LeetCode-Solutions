class Solution {
public:
    string reverseWords(string s) {
        int i = 0 ;
        int j = s.find(" ") ;
        while(j!=string::npos){
            int x=i;
            int y=j-1;
            while(x<y){
                swap(s[x],s[y]);
                x++;y--;
            }
            i=j+1;
            j = s.find(" ",i) ;
        }
        
        int x=i;
            int y=s.size()-1;
            while(x<y){
                swap(s[x],s[y]);
                x++;y--;
            }

        return s;
    }
};