class Solution {
public:
    int characterReplacement(string s, int k) {    
        int maxx=k;
        int arr[26]={0};
        int start = 0 ;
        int end = k;
        for(int i = 0 ; i < k+1 ; i++){
            arr[s[i]-'A']++;
            
        }
        cout <<arr[0];
        while(end<s.size()){
            int maxxx=0;
        for(int i = 0 ;i < 26;i++){
            if(arr[i]>maxxx)
                maxxx=arr[i];
        }
        
            int mostfrequent = maxxx;
            cout <<endl<<end<<" "<<start<<" "<<mostfrequent<<" ";
           if(k-(end-start+1-mostfrequent)<0){
               maxx=max(maxx,end-start);
               arr[s[start]-'A']--;
               start++;
               end++;
               if(s[end])arr[s[end]-'A']++;
           }else{
               end++;
               
               if(s[end]){
                   arr[s[end]-'A']++;
               }
           }
        }
        if(!s[end]) maxx=max(maxx,end-start);
        return maxx;
    }
   
};