//Problem Link:-https://practice.geeksforgeeks.org/problems/subset-sum-problem2014/1
class Solution{
public:
    bool find(int sum,int arr[],int n,int target,int i){
        if(target==sum)return true;
        if(target>sum || i>=n)return false;
        return (find(sum,arr,n,target+arr[i],i+1)||find(sum,arr,n,target,i+1));
    }
    int equalPartition(int n, int arr[])
    {
        // code here
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        if(sum%2!=0){
            return 0;
        }
        sum=sum/2;
        
        return find(sum,arr,n,0,0);
        
    }
};