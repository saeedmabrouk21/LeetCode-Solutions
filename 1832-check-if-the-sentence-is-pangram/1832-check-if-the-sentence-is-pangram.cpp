class Solution {
public:
    bool checkIfPangram(string sentence) {
        int a = 0 ;
        for(int i = 0 ; i < sentence.length();i++){
            if(( a>> (sentence[i]-'a') & 1) == 0){
                a = a | (1<<sentence[i]-'a');
            }
        }
        
        if(a==67108863)
            return true;
        return false;
    }
};