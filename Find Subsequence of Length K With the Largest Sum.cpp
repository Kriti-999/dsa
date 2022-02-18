//Problem Link:-https://leetcode.com/problems/find-subsequence-of-length-k-with-the-largest-sum/
class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<pair<int,int>>v;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            v.push_back({nums[i],i});
            
        }
        nth_element(v.begin(),v.begin()+k,v.end(),greater<pair<int,int>>());
        sort(v.begin(),v.begin()+k,[](pair<int,int>a,pair<int,int>b){
            return(a.second<b.second);
        });
        for(int i=0;i<k;i++){
            ans.push_back(v[i].first);
        }
        return ans;
    }
};