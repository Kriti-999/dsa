Problem Link:-https://leetcode.com/problems/maximum-split-of-positive-even-integers/
class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        vector<long long> v;
        if(finalSum<5 && finalSum%2==0){
            v.push_back(finalSum);
            return v;
        }
         //vector<long long> v;
        long long p=0,sum=0;
        if(finalSum%2==0){
            while(finalSum>sum){
                p+=2;
                sum+=p;
                v.push_back(p);
                
            }
            if(sum!=finalSum){
                sum=sum-finalSum;
                
                long long t=v.back();
                v.pop_back();
                v.back()=v.back()+t-sum;
            }
           
         
            
        }
        return v;
    }
};