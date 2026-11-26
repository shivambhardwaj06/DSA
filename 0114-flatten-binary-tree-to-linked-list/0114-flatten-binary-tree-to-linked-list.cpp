class Solution {
private:
    void preorder(TreeNode* root, vector<TreeNode*>& order) {
        if(root == NULL) return;

        order.push_back(root);
        preorder(root->left, order);
        preorder(root->right, order);
    }

public:
    void flatten(TreeNode* root) {
        if(root == NULL) return;

        vector<TreeNode*> order;
        preorder(root, order);

        for(int i = 1; i < order.size(); i++) {
            root->left = NULL;
            root->right = order[i];
            root = root->right;
        }

        root->left = NULL;
        root->right = NULL;
    }
};