Problem Link:-https://leetcode.com/problems/find-three-consecutive-integers-that-sum-to-a-given-number/
class Solution {
public:
    vector<long long> sumOfThree(long long nums) {
        vector<long long> v;
        if(nums%3==0){
            nums=nums/3;
            v.push_back(nums-1);
            v.push_back(nums);
            v.push_back(nums+1);
        }
        return v;
    }
};