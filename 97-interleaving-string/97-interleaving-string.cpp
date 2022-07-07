class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        int l1 = s1.length(),l2=s2.length();
        vector<vector<int>>dp(l1+1,(vector<int>(l2+1,-1)));
        return saeed(s1,s2,s3,dp);
        
    }
    bool saeed (string s1,string s2,string s3,vector<vector<int>>&dp){
        int l1 = s1.length(),l2=s2.length(),l3=s3.length();
        if(l1+l2!=l3)                               return false;
        if(!l1&&!l2&&!l3)                           return true;
        if(dp[l1][l2]!=-1)                          return dp[l1][l2];
        if(l1&&l2&&s1[0]==s3[0]&&s2[0]==s3[0])      return dp[l1][l2]=saeed(s1,s2.substr(1),s3.substr(1),dp)||saeed(s1.substr(1),s2,s3.substr(1),dp); 
        //the string one not empty and first charater = next carater in string three
        if(l1&&s1[0]==s3[0])return dp[l1][l2]=saeed(s1.substr(1),s2,s3.substr(1),dp);
        if(l2&&s2[0]==s3[0]) return dp[l1][l2]= saeed(s1,s2.substr(1),s3.substr(1),dp);
        return false;
    }
};