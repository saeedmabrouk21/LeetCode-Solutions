class Solution {
public:
    bool checkIfPangram(string sentence) {
        int a = 0 ;
        int b = 0 ;
        for(int i = 0 ; i < sentence.length();i++){
            if(( a>> (sentence[i]-'a') & 1) == 0){
              //  cout <<"da";
                a = a | (1<<sentence[i]-'a');
                //cout <<a;
                b++;
            }
        }
        
        if(b==26)
            return true;
        return false;
    }
};