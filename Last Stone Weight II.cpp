//Problem Link:-https://leetcode.com/problems/last-stone-weight-ii/
class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {
        bitset<1500>dp={1};
        int sum=0;
        for(int i=0;i<stones.size();i++){
            sum+=stones[i];
            for(int j=min(sum,1500);j>=stones[i];j--){
              dp[j]=dp[j]+dp[j-stones[i]];
            }
        }
        for(int i=sum/2;i>=0;i--){
            if(dp[i])return(sum-2*i);
        }
        return 0;
    }
};