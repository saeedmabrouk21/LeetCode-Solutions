class Solution {
public:
    string getHint(string secret, string guess) {
        int buulls = 0 ;
        int cows = 0;
        int arr1[10]={0};
        int arr2[10]={0};
        for(int i = 0 ; i < secret.size();i++){
            if(secret[i]==guess[i]){
                buulls++;
                
            }else{
                arr1[secret[i]-'0']++;
                arr2[guess[i]-'0']++;
            }
        }
    
        for(int i = 0;i<10;i++){
            cows+=min(arr1[i],arr2[i]);
        }
        string ans;
        // while(buulls){
        //     ans.push_front((buulls%10)+'0');
        //     buulls/=10;
        // }
        ans+=to_string(buulls);
        ans.push_back('A');
        ans+=to_string(cows);
        //  while(cows){
        //     ans.push_back((cows%10)+'0');
        //     cows/=10;
        // }
        ans.push_back('B');
        return ans;
    }
};