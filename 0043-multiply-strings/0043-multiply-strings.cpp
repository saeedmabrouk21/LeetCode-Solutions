class Solution {
public:
    string multiply(string num1, string num2) {
        //if("sss"=="sss") cout <<1;
        if(num1=="0"||num2=="0") return "0";
        string summ = "" ;
        for(int i = num2.size()-1 ; i>=0;i--){
            string a =  mul(num1,num2[i]-'0')+string(num2.size()-i-1,'0');
            //cout <<a<<endl;
            summ = sum(summ ,a);
        }
        return summ ;
    }
    string mul (string a , int b ){
        string mul = string (a.size()+1,'0');
        int remain=0;
        int summ = 0 ;
        for(int i = a.size()-1 ; i >=0 ; i--){
            //cout <<a[i]-'0'<<endl;
            ////cout <<b<<endl;
            int mulDigit = (a[i]-'0') * b; 
            mulDigit += remain ;
            //cout <<mulDigit<<endl;
            mul[i+1]= mulDigit%10+'0';
            remain = mulDigit/10;
           
           
        }
        if(remain != 0){
            mul[0]= remain+'0' ;
            return mul;
        }
        
        return mul.substr(1);
        
    }
    string  sum (string a , string b){
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