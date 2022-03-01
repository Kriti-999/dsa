//Problem Link:-https://practice.geeksforgeeks.org/problems/pots-of-gold-game/1/
class Solution {
public:
    int solve(vector<int>A,int s,int e,vector<vector<int>>&dp){
        if(s>e){
           
            return 0;
        }
        if(s==e){
            dp[s][e]=A[s];
            return dp[s][e];
        }
        if(dp[s][e]!=-1)return dp[s][e];
        dp[s][e]=A[s]+min(solve(A,s+1,e-1,dp),solve(A,s+2,e,dp));
        dp[s][e]=max(dp[s][e],A[e]+min(solve(A,s+1,e-1,dp),solve(A,s,e-2,dp)));
        return dp[s][e];
    }
    int maxCoins(vector<int>&A,int n)
    {
	    //Write your code here
	    vector<vector<int>>dp(n,vector<int>(n,-1));
	    return solve(A,0,n-1,dp);
    }
};