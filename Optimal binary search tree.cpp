//Problem Link:-https://practice.geeksforgeeks.org/problems/optimal-binary-search-tree2214/1#
const int INF = 1e9;
class Solution{
    public:
    int solve(int i, int j, int freq[], vector<vector<int>>& dp) {
        if(i > j) return 0;
        if(dp[i][j] != INF) return dp[i][j];
        
        int sum = 0;
        for(int k=i; k<=j; k++) sum += freq[k];
        
        for(int k=i; k<=j; k++)
            dp[i][j] = min(dp[i][j], sum+solve(i,k-1,freq,dp)+solve(k+1,j,freq,dp));
        
        return dp[i][j];
    }
    
    int optimalSearchTree(int keys[], int freq[], int n) {
        vector<vector<int>> dp(n, vector<int>(n,INF));
        
        for(int i=0; i<n; i++)
            dp[i][i] = freq[i];
        
        return solve(0,n-1,freq,dp);
    }
};