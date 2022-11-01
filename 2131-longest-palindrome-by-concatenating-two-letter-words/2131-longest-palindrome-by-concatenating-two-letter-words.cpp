class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int> ab;
        for(auto x : words){
            ab[x]++;
        }
        unordered_map<std::string, int>::iterator it = ab.begin();
        bool a = false;
        int length = 0 ;
        while (it != ab.end()){
            string curr = string(1,it->first[1])+it->first[0];
            cout <<curr<<endl;
            if(ab.find(curr) != ab.end()&& it->second > 0){
                if(it->first[0]==it->first[1]){
                   
                    if(it->second%2==1 && !a){
                        length+= 2*ab[curr];
                        a = true;
                    }else if (ab[curr]%2==1){
                        length+= 2*(ab[curr]-1);
                    }else{
                        length+= 2*ab[curr];
                    } 
                    it->second = 0;
                    cout <<length <<endl;
                }  
                else{
                    //cout <<it->first<<endl<<length<<endl;
                    int th = ab[curr];
                    th = min(it->second ,ab[curr]);
                    length += th*4;
                    ab[curr]=0;
                    it->second = 0;
                    cout <<length<<endl;
               } 
                    
           }
            it++;
        }
        return length;
    }
};