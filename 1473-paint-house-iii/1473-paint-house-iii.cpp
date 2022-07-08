class Solution {
public:
    int memo[100][100][21];
    int maxcost =1000001;
    
    int minCost(vector<int>& houses, vector<vector<int>>& cost, int m, int n, int target) {
     memset(memo,-1,sizeof(memo));
        int answer = findmin(houses,cost,target,0,0,0);
        return answer==maxcost?-1:answer;
    }
    int findmin(vector<int>&houses,vector<vector<int>>&cost,int targetCount, int currIndex,int neighborhoodCount,int prevHouseColor){
        if(currIndex==houses.size())
                return neighborhoodCount ==targetCount?0:maxcost;
        
        if(neighborhoodCount>targetCount)
            return maxcost;
        
        if (memo[currIndex][neighborhoodCount][prevHouseColor] != -1) {
            return memo[currIndex][neighborhoodCount][prevHouseColor];
        }
        int mincost=maxcost;
        if(houses[currIndex]){
            int neww = neighborhoodCount+(houses[currIndex]!=prevHouseColor);
            mincost=findmin(houses,cost,targetCount,currIndex+1,neww,houses[currIndex]);
        }else{
            int total=cost[0].size();
            for(int i = 1 ; i <= total;i++){
                int neww = neighborhoodCount + (i!=prevHouseColor);
                int currCost = cost[currIndex][i-1]+findmin(houses,cost,targetCount,currIndex+1,neww,i);
                mincost=min(mincost,currCost);
            }
        }
        return memo[currIndex][neighborhoodCount][prevHouseColor]=mincost;
        
    }
};