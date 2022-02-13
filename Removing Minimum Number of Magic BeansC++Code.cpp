class Solution {
public:
    typedef long long ll;
    const int mod=1e9+7;
    long long minimumRemoval(vector<int>& beans) {
        long long sum=0;
        
        int n=beans.size();
        for(int i=0;i<n;i++){
            sum+=beans[i];
        }
        long long res=sum,ans,u=0;
        
        sort(beans.begin(),beans.end());
        
        for(int i=0;i<n;i++){
            
            res=min(sum-1ll*(n-i)*beans[i],res);
        }
        return res;
    }
};