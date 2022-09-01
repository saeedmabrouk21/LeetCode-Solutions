class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=1;
        vector<bool>vi(rooms.size(),false);
        queue<int> ab;
        ab.push(0);
        vi[0]=1;
        while(!ab.empty()){
            int c=ab.front();
            ab.pop();
            for(int i = 0 ; i < rooms[c].size();i++){
                if(vi[rooms[c][i]]==0){
                    ab.push(rooms[c][i]);
                    cout<<rooms[c][i]<<" "<<c<<endl;
                    n++;
                    vi[rooms[c][i]]=1;
                }
            }
        }
        cout <<endl;
        if(n==rooms.size())
            return true;
        return false;
    }
    
};