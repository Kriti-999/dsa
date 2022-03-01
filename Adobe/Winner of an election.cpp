//Problem Link:-https://practice.geeksforgeeks.org/problems/winner-of-an-election-where-votes-are-represented-as-candidate-names-1587115621/1/
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        int a=0;
        vector<string>v;
        map<string,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
            a=max(a,mp[arr[i]]);
        }
        for(auto m:mp){
            if(m.second==a){
                v.push_back(m.first);
                v.push_back(to_string(m.second));
                break;
            }
        }
        return v;
    }
};