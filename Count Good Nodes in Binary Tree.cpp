//Problem Link:-https://leetcode.com/problems/count-good-nodes-in-binary-tree/
class Solution {
public:
    void solve(TreeNode* root,int maxS,int &c){
        if(root==NULL)return ;
        if(maxS<=root->val){
            c++;
            maxS=root->val;
        }
        solve(root->left,maxS,c);
        solve(root->right,maxS,c);
    }
    int goodNodes(TreeNode* root) {
        int c=0;
        if(root==NULL)return c;
        solve(root,root->val,c);
        return c;
    }
};