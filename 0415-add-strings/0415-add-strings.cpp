class Solution {
public:
    string addStrings(string a, string b) {
        int sumSize = a.size()>b.size() ? a.size() : b.size();
        string sum = string(sumSize+1,'0');
        int i = a.size()-1 ;
        int j = b.size()-1;
        int rem = 0;
        int kk = 0 ;
        while(i >-1 || j>-1){
          
            if(i>-1)
                kk += (a[i]-'0');
            
            if(j>-1)
                kk += (b[j]-'0');
          
            kk+=rem ;
            
            int nextDigit = i>j?i:j;
            //cout <<nextDigit<<endl;
            if(kk >9){
                
                sum[nextDigit+1]=(char)(kk%10+'0');
                rem  = 1;
            }else{
                //cout <<kk<<endl;
                //cout <<sum<<endl;
                sum[nextDigit+1]=(char)(kk+'0');
                //cout <<sum<<endl;
                rem = 0;
            }
            kk = 0;
            i--;
            j--;
        } 
        if(rem!=0){
            sum[0]=(char)(1+'0');
            return sum;
        }
        return sum.substr(1);
    
    }
};

