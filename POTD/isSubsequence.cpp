class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.size();
        int m=t.size();
        int dp[m+1][n+1];
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                if(i==0 || j==0){
                    dp[i][j]=0;
                }
                else{
                    if(s[j-1] == t[i-1]){
                        dp[i][j] = dp[i-1][j-1]+1;
                    }
                    else{
                        dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                    }
                }
            }
        }
        return dp[m][n]==n;
    }
};
/*
here i used the dynamic programming approch of the parent problem(Longest common subsequence.
MAIN CONCEPT-
  1. i made a 2d matric with number of rows as size of the larger string and number of columns as size of smaller string.
  2. i run a 2 for loops.
  3. if(i==0 or j==0) dp[i][j]=0;
  4. if(element of the larger string and the smaler string matches then we will remove the last element from both the strings and add 1, because it gives the number of matching elements till now+1 ,(+1 for the current matching elemnts).
  5. and if the elemnts did not match then we will store the max between (dp[i-1][j],dp[i][j-1])) i.e max between whether excluding the last element of smaller string gives accurate result or wxluding the last elemnt of larger string gives more accurate result.
  6 and if the rightmost cell of the matrix contains the number same as no of columns(size of the smaaler string) then YES the subsequence exists
  
  
