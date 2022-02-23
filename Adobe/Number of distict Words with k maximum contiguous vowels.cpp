//Problem Link:-https://practice.geeksforgeeks.org/problems/7b9d245852bd8caf8a27d6d3961429f0a2b245f1/1/
class Solution
{
  public:
    int kvowelwords(int N, int K) {
        // Write Your Code here
        const int mod=1e9+7;
        vector<vector<long long>>v(N+1,vector<long long>(K+1,0));
        for(int i=0;i<=N;i++){
            for(int j=0;j<=K;j++){
                if(i==0){
                    v[i][j]=1;
                    
                }
                else{
                    v[i][j]=v[i-1][K]*21;
                    if(j>0){
                        v[i][j]=(v[i][j]+v[i-1][j-1]*5)%mod;
                    }
                }
            }
        }
        return (v[N][K]);
    }
};