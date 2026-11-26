/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right; 
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    void preorder(TreeNode* root, vector<int>& order) {
        if (root == NULL)
            return;
        order.push_back(root->val);
        preorder(root->left,order);
        preorder(root->right,order);
    }

public:
    void flatten(TreeNode* root) {
        if(root==NULL){
            return ;
        }
        vector<int> order;
        preorder(root, order);
        for(int i = 1 ; i < order.size() ; i++){
           TreeNode * newNode = new TreeNode(order[i]);
           root->left = NULL;
           root->right = newNode ; 
           root=root->right;
        }
    }
};