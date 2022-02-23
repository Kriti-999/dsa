//Problem Link:-https://practice.geeksforgeeks.org/problems/longest-arithmetic-progression1019/1/
class Solution{   
public:
    int lengthOfLongestAP(int A[], int n) {
        // code here
        int ans=1;
        vector<unordered_map<int,int>>mp(n);
        int diff;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                diff=A[i]-A[j];
                if(mp[j].find(diff)!=mp[j].end()){
                    mp[i][diff]=mp[j][diff]+1;
                }
                else{
                    mp[i][diff]=2;
                }
                ans=max(ans,mp[i][diff]);
            }
            
            
        }
        return ans;
    }
};