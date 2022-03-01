//Problem Link:-https://practice.geeksforgeeks.org/problems/minimum-insertions-to-make-two-arrays-equal/1/
class Solution {
  public:
    int Lis(vector<int>v){
        int ans=0;
       
        int n=v.size();
         vector<int>dp(n,0);
        for(int i=0;i<n;i++){
            dp[i]=1;
            for(int j=0;j<i;j++){
                if(v[i]<v[j]){
                    dp[i]=max(dp[i],dp[j]+1);
                }
                ans=max(dp[i],ans);
            }
        }
        return ans;
    }
    int minInsAndDel(int A[], int B[], int N, int M) {
        // code here
        unordered_set<int>s;
        vector<int>v;
        int step=0;
        for(int i=0;i<M;i++){
            s.insert(B[i]);
        }
        for(int i=0;i<N;i++){
            if(s.find(A[i])!=s.end()){
                v.push_back(A[i]);
            }
            else{
                step++;
            }
        }
        int n=v.size();
        return (n+M-2*Lis(v)+step);
       
    }
};