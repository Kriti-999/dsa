//Problem Link:-https://practice.geeksforgeeks.org/problems/express-as-sum-of-power-of-natural-numbers5647/1
class Solution{
    public:
    
    long long mod=1e9+7;
    long long int solve(int n,int x,int i,vector<vector<long long int>>&dp){
        if(n==0){
            dp[n][i]=1;
            return dp[n][i];
        }
        if(dp[n][i]!=-1){
            return dp[n][i];
        }
        if(i>n)return 0;
        int temp=pow(i,x);
        if(temp<=n){
            dp[n][i]=(solve(n,x,i+1,dp)+solve(n-temp,x,i+1,dp))%mod;
            return dp[n][i];
        }
        else{
            dp[n][i]=0;
            return dp[n][i];
        }
        
    }
    long long int numOfWays(int n, int x)
    {
        // code here
        vector<vector<long long int>>dp(1001,vector< long long int>(1001,-1));
        return solve(n,x,1,dp);
    }
};