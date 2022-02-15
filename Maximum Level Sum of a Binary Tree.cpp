//Problem Link:-https://leetcode.com/problems/maximum-level-sum-of-a-binary-
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int c=0,level;
        int ans=INT_MIN,sum;
        while(!q.empty()){
            sum=0;
            c++;
            for(int i=0,n=q.size();i<n;i++){
                TreeNode *curr=q.front();
                q.pop();
                sum+=curr->val;
                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
            }
            if(ans<sum){
                ans=sum;
                level=c;
            }
        }
        return level;
    }
};