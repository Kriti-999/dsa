//Problem Link-"https://leetcode.com/problems/binary-tree-preorder-traversal/"
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>v;
        if(root==NULL)return v;
        stack<TreeNode*>st;
        st.push(root);
        while(!st.empty()){
            TreeNode* front=st.top();
            v.push_back(front->val);
            st.pop();
            if(front->right){
                st.push(front->right);
            }
            if(front->left){
                st.push(front->left);
            }
            
        }
        return v;
    }
};