/
//  Definition for a binary tree node.
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
 
class Solution {
public:
    vector<int> vec;
    void pre(TreeNode* node){
        if(node!=NULL){
            vec.push_back(node->val);
            pre(node->left);
            pre(node->right);
        }
    }
    vector<int> preorderTraversal(TreeNode* root) {
        pre(root);
        return vec;
    }
};