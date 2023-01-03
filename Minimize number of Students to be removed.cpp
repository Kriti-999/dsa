//Problem Link-https://practice.geeksforgeeks.org/problems/7d0fa4007b8eabadc404fcc9fa917aa52982aa96/1
class Solution {
  public:
    int theLastNumberWhichIsGreater(vector<int>&dp,int len,int x){
        int l=0,h=len-1;
        while(l<h){
            int mid=(l+h)/2;
            if(dp[mid]>=x){
                h=mid;
            }
            else{
                l=mid+1;
            }
        }
        return h;
    }
    int removeStudents(int H[], int N) {
        // code here
        vector<int>dp(N,0);
        dp[0]=H[0];
        int len=1;
        for(int i=1;i<N;i++){
            if(dp[len-1]<H[i]){
                dp[len]=H[i];
                len++;
            }
            else{
                int l=theLastNumberWhichIsGreater(dp,len,H[i]);
                dp[l]=H[i];
            }
            
            
        }
        return N-len;
    }
};