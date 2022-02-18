//Problem Link:-https://practice.geeksforgeeks.org/problems/d1afdbd3d49e4e7e6f9d738606cd592f63e6b0f0/1
class Solution{
public:
   int res=0;
    void solve(Node* root,unordered_map<Node*,int>&mp){
        if(root==NULL)return ;
        solve(root->left,mp);
        solve(root->right,mp);
        if(mp[root->left]==-1 or mp[root->right]==-1){
            mp[root]=1;
            res++;
        }
        else if(mp[root->left]==1 or mp[root->right]==1){
            mp[root]=0;
        }
        else{
            mp[root]=-1;
        }
    }
    int supplyVaccine(Node* root){
        // Your code goes here
        unordered_map<Node*,int>mp;
        res=0;
        solve(root,mp);
        return res;
        
        
    }
};