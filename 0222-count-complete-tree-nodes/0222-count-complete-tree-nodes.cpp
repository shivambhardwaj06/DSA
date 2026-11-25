class Solution {
public:
    int countNodes(TreeNode* root) {
        if(root==NULL){
            return 0 ;
        }
        int lh = leftHeight(root);
        int rh = rightHeight(root);

        if(lh==rh) return ( 1 << lh )- 1;
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
    int leftHeight(TreeNode * root){
        int count = 0 ;
        while(root){
            count++;
            root=root->left;
        }
        return count;
    }
        int rightHeight(TreeNode * root){
        int count = 0 ;
        while(root){
            count++;
            root=root->right;
        }
        return count;
    }
};