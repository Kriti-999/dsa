//Problem Link-"https://leetcode.com/problems/delete-columns-to-make-sorted/"
class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n=strs[0].length(),c=0;
        for(int i=0;i<n;i++){
            string temp="";
            for(int j=0;j<strs.size()-1;j++){
                if(strs[j][i]>strs[j+1][i]){
                    c++;
                    break;
                }
            }
           
        }
        return c;
    }
};