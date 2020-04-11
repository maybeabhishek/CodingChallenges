
// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int d = 0;
        depth(root, d);
        return d;
        
    }
    int depth(TreeNode* node, int &d){
        if(node==NULL)
            return 0;
        else{
            int ldepth = depth(node->left, d);
            int rdepth = depth(node->right, d);
            d = max(d,ldepth+rdepth);
            return max(ldepth,rdepth)+1;
        }
    }
};