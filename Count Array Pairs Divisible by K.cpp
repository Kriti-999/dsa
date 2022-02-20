//Problem Link:-https://leetcode.com/problems/count-array-pairs-divisible-by-k/
class Solution {
public:
    const int MAX = 1e5+5;
    int gcd(int a,int b){
        
    return b == 0 ? a : gcd(b, a % b);
    }
    long long coutPairs(vector<int>& nums, int k) {
        long long sum=0;
        vector<int>v;
         vector<int>mp(MAX,0);
        for(int i=0;i<nums.size();i++){
            int a=gcd(nums[i],k);
            for(long long j:v){
                if((a*j)%k==0){
                    sum+=mp[j];
                }
            }
            if(mp[a]==0){
                v.push_back(a);
                
            }
            mp[a]++;
        }
        return sum;
    }
};