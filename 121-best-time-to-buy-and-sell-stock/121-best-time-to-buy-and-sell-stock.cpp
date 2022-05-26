class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lastprofit = 0;
        int max = 0;
        int min = 10001;
        for(int i = 0 ; i< prices.size();i++){
            if(prices[i]>max){
                max = prices[i];
                if(max-min > lastprofit)
                    lastprofit = max-min;
            }
            if(prices[i]<=min){

                min = prices[i];//2
                max = 0;//6
            }
            
        }
        //lastprofit = lastprofit < 0 ? 0 :lastprofit;
        return lastprofit;
    }
};