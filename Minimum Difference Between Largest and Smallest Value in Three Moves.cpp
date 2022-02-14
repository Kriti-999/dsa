//Problem Link:-https://leetcode.com/problems/minimum-difference-between-largest-and-smallest-value-in-three-moves/
class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n=nums.size();
        if(n<=4)return 0;
        sort(nums.begin(),nums.end());
        int a=abs(nums[2]-nums[n-2]);
        a=min(a,abs(nums[n-4]-nums[0]));
        a=min(a,abs(nums[3]-nums[n-1]));
        a=min(a,abs(nums[1]-nums[n-3]));
        return(a);
       
    }
};