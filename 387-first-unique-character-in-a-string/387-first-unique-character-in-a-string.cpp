class Solution {
public:
    int firstUniqChar(string s) {
        int arr[26]={0};
        for(auto x:s){
            arr[x-'a']++;
        }
        for(int i = 0 ; i < s.size();i++){
            if(arr[s[i]-'a']==1)
                return i;
        }
        return -1;
    }
};