class Solution {
private:
    int countPath(int i,int j,int m,int n,vector<vector<int>> &dp){
        if(i==m-1 && j==n-1){
            return dp[i][j] = 1;
        }
        else if(i<0 || j<0 || i>=m || j>=n){
            return 0;
        }
        if(dp[i][j]!=-1) return dp[i][j];

        dp[i][j] = countPath(i+1,j,m,n,dp)+countPath(i,j+1,m,n,dp);
        return dp[i][j];
    }

public:
    int uniquePaths(int m, int n) {
        int i=0;
        int j=0;
        vector<vector<int>> dp(m,vector<int>(n,-1));

        return countPath(i,j,m,n,dp);
    }
};