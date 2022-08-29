class Solution {
public:
    bool isValid(string s) {
        stack<char> ss;
        for(auto x:s){
            if(x=='(' ||x=='{' ||x=='[' ){
                ss.push(x);
            }
            else {
                if(x==')'){
                    if(ss.empty()||ss.top()!='(')
                        return false;
                    ss.pop();
                    
                }else if(x=='}'){
                    if(ss.empty()||ss.top()!='{')
                        return false;
                    ss.pop();
                }else if(x==']'){
                    if(ss.empty()||ss.top()!='[')
                        return false;
                    ss.pop();
                }
            }
        }
        if(ss.empty())
        return true;
        return false;

    }
};