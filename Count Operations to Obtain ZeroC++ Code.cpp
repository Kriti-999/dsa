//Problem Link:-"https://leetcode.com/problems/count-operations-to-obtain-zero/"
class Solution {
public:
    int countOperations(int num1, int num2) {
        if(num2==0 || num1==0){
                return 0;
            }
        int c=0;
        while(true){
            c++;
            if(num1>=num2){
                num1-=num2;
            }
            else{
                num2-=num1;
            }
            if(num2==0 || num1==0){
                return c;
            }
        }
        return c;
    }
};