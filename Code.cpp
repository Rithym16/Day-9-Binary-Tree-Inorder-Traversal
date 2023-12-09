class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>v;
        inorderhelper(root,v);
        return v;
    }
    void inorderhelper(TreeNode* node,vector<int>&v){
        if(node){
            inorderhelper(node->left,v);
            v.push_back(node->val);
            inorderhelper(node->right,v);
        }
    }
};
