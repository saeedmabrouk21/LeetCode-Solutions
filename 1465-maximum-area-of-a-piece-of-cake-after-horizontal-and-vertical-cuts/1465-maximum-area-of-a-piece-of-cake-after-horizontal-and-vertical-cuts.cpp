class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        int diffH = horizontalCuts[0]-0;
        int diffV = verticalCuts[0]-0;
        for(int i = 1 ; i < horizontalCuts.size();i++){
            if(horizontalCuts[i]-horizontalCuts[i-1]>diffH)
                diffH=horizontalCuts[i]-horizontalCuts[i-1];
        }
        cout<<diffH;
        int i ;
        for( i=1; i < verticalCuts.size();i++){
            if(verticalCuts[i]-verticalCuts[i-1]>diffV)
                diffV=verticalCuts[i]-verticalCuts[i-1];
        }
        if(w-verticalCuts[i-1]>diffV)
                diffV=w-verticalCuts[i-1];
        if(h-horizontalCuts.back()>diffH)
                diffH=h-horizontalCuts.back();
        cout<< diffH<<diffV;
        return ((long long)diffH*diffV)% 1000000007;
        
    }
};