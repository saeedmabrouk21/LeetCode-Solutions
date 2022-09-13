class Solution {
public:
    bool backspaceCompare(string s, string t) {
            stack <char> a;
            stack <char> b;
        for(auto x:s){
            if(x=='#'){
                if(!a.empty()){
                    a.pop();
                }
            }else{
                a.push(x);
            }
        }
        for(auto x:t){
            if(x=='#'){
                if(!b.empty()){
                    b.pop();
                }
            }else{
                b.push(x);
            }
        }
        while(!a.empty()&&!b.empty()){
            if(a.top()!=b.top()){
                return false;
            }
            a.pop();
            b.pop();
        }
        if(a.empty()^b.empty()){
            return false;
            
        }
        return true;
        
    }
    
};