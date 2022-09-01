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
            for(auto x:rooms[c]){
                if(vi[x]==0){
                    ab.push(x);
                    cout<<x<<" "<<c<<endl;
                    n++;
                    vi[x]=1;
                }
            }
        }
        cout <<endl;
        if(n==rooms.size())
            return true;
        return false;
    }
    
};