class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())
                return false;
        int arr[26]={0};
        
        for(auto x:s1){
            arr[x-'a']++;
        } 
        for(int i = 0 ; i < s2.length()-s1.size()+1;i++){
            int arr2[26]={0};
            for(int j = i ; j < i+s1.size();j++){
                arr2[s2[j]-'a']++;
            }
            
            
            int j;
            for(j = 0 ; j < 26;j++){
                if(arr[j]!=arr2[j])
                    break;
            }
            if(j==26){
                return true;
            }
            
          
        }
        return false;
    }
};