bool com(vector<int> const &a,vector<int>const &b){
    return a[1]>b[1];
}
class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int ret=0;
        sort(boxTypes.begin(),boxTypes.end(),com);
        for(int i = 0 ; truckSize>0 && i < boxTypes.size() ;i++){
            if(truckSize>boxTypes[i][0]){
                ret+=(boxTypes[i][0]*boxTypes[i][1]);
                truckSize-=boxTypes[i][0];
            }else{
                ret+=(truckSize*boxTypes[i][1]);
                truckSize=0;
            }
        }
        return ret;
   
    }

};