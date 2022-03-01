//Problem Link:-https://practice.geeksforgeeks.org/problems/next-higher-palindromic-number-using-the-same-set-of-digits5859/1/
class Solution{
  public:
    string nextPalin(string N) { 
        //complete the function here
        int l=N.length();
        if(l<=3)return "-1";
        int mid=l/2;
        string res="";
        int index=l;
        string temp=N.substr(0,mid);
        for(int i=mid-1;i>0;i--){
            if(temp[i]-'0'>temp[i-1]-'0'){
                index=i-1;
                break;
            }
        }
        if(index==l)return "-1";
        
        for(int i=mid-1;i>0;i--){
            if(temp[i]-'0'>temp[index]-'0'){
                swap(temp[i],temp[index]);
                break;
            }
        }
        reverse(temp.begin()+index+1,temp.end());
        res=temp;
        if(l%2!=0){
            res+=N[mid];
        }
        reverse(temp.begin(),temp.end());
        res+=temp;
        return res;
        
        
    }
};