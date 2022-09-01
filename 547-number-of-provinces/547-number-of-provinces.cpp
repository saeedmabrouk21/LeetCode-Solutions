class Solution {
public:
    int findCircleNum(vector<vector<int>>& rooms) {
        int n=0;
        vector<bool>vi(rooms.size(),false);
        for(int j = 0 ; j < rooms.size();j++){
            if(!vi[j]){
                n++;
                queue<int> ab;
                ab.push(j);
                vi[j]=1;
                while(!ab.empty()){
                    int c=ab.front();
                    ab.pop();
                    for(int i = 0 ; i < rooms[c].size();i++){
                       
                        if(rooms[c][i]==1&&vi[i]==0){
                            ab.push(i);
                            vi[i]=1;
                        }
                    }
                }
        
            }
        }
      
        
        
        return n;
    }
    
};
        
        
        
        
