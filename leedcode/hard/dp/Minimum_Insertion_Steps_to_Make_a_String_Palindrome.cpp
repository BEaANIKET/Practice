class Solution {
public:
int solve(string a,string b){
  vector<vector<int>>dp(a.length()+1,vector<int>(b.length()+1,0));
  
  for(int i=a.length()-1;i>=0;i--){
      for(int j=b.length()-1;j>=0;j--){
          int ans=0;
          if(a[i]==b[j]){
              ans=1+dp[i+1][j+1];
          }
          else{
              ans=max(dp[i+1][j],dp[i][j+1]);
          }
          dp[i][j]=ans;
      }
  }
  return dp[0][0];
}
    int minInsertions(string s) {
        string rev=s;
        reverse(rev.begin(),rev.end());
  
    int cstring;
    cstring=solve(s,rev);

    int output=s.length()-cstring;
    return output;
    }
};