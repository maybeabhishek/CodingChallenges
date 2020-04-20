/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    void insert(TreeNode* head, int v){
        if(head==NULL)
            return;
        if(head->val>v) {
            if(head->left == NULL){
                TreeNode* temp = new TreeNode(v);
                head->left = temp;
                return;
            }
            else
                insert(head->left,v);
        }
        else{
            if(head->right == NULL){
                TreeNode* temp = new TreeNode(v);
                head->right = temp;
                return;
            }
            else
                insert(head->right,v);
        }
        
    }
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int n = preorder.size();
        TreeNode* head;
        head = new TreeNode(preorder[0]);
        
        for(int i = 1 ; i < n; i++){
            insert(head, preorder[i]);
        }
        return head;
    }
};