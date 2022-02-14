//Problem Link:-https://leetcode.com/problems/minimum-domino-rotations-for-equal-row/
class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        vector<int>cA(7,0);
        vector<int>cB(7,0);
        vector<int>same(7,0);
        int n=tops.size();
        for(int i=0;i<tops.size();i++){
            cA[tops[i]]++;
            cB[bottoms[i]]++;
            if(tops[i]==bottoms[i]){
                same[tops[i]]++;
            }
        }
        for(int i=1;i<7;i++){
            if(cA[i]+cB[i]-same[i]==n){
                return(n-max(cA[i],cB[i]));
            }
        }
        return -1;
    }
};