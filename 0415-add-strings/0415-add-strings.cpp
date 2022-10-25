class Solution {
public:
    string addStrings(string a, string b) {
        int i = a.size()-1 ;
        int j = b.size()-1;
        int rem = 0;
        string sum ="";
        int kk = 0 ;
        while(i >-1 || j>-1){
          //  cout <<"#";
            //cout <<kk<<endl;
            if(i>-1)
                kk += (a[i]-'0');
            //cout <<kk<<endl;
            if(j>-1)
                kk += (b[j]-'0');
            //cout <<kk<<endl;
            kk+=rem ;
            //cout <<kk<<"    ";
            if(kk >9){
                string bb  = string(1,(char)(kk%10+'0'));
                sum = bb + sum;
                rem  = 1;
            }else{
                string bb  = string(1,(char)(kk+'0'));
                //cout <<kk << "  "<< bb;
                sum = bb + sum;
                rem = 0;
            }
            //rem = 0 ;
            kk = 0;
            i--;
            j--;
        } 
        if(rem!=0){
            string bb  = string(1,(char)(rem+'0'));
                    //cout <<kk << "  "<< bb;
            sum = bb + sum;
        }
        return sum;
    
    }
};

