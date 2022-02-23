//Problem Link:-https://practice.geeksforgeeks.org/problems/implement-atoi/1/
class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        //Your code here
        int res=0;
        bool f=false;
        for(int i=0;i<str.length();i++){
            if(str[i]=='-'){
                f=true;
                continue;
            }
            if(!isdigit(str[i])){
                return -1;
            }
            else{
                res=res*10+(str[i]-'0');
            }
        }
        if(f){
            res*=-1;
        }
        return res;
    }
};