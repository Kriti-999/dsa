//Problem Link:-https://leetcode.com/problems/combination-sum/
class Solution {
public:
    vector<vector<int>>ans;
    void solve(vector<int>candidates, int target,vector<int>temp, int size){
        if(size<0 || target<0)return ;
        if(target==0){
            ans.push_back(temp);
            return ;
        }
        solve(candidates, target,temp,size-1);
        temp.push_back(candidates[size]);
        solve(candidates, target-candidates[size],temp,size);
        
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        int n=candidates.size();
        solve(candidates, target,temp,n-1);
        return ans;
    }
};