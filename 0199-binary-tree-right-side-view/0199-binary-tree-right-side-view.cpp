// class Solution {
// private : 
//     vector<vector<int>> levelOrder(TreeNode* root) {
//         vector<vector<int>> ans;
//         if (root == NULL) return ans;
//         queue<TreeNode*> q;
//         q.push(root);
//         while (!q.empty()) {
//             int size = q.size();
//             vector<int> level;
//             for (int i = 0; i < size; i++) {
//                 TreeNode* node = q.front();
//                 q.pop();
//                 if (node->right != NULL)
//                     q.push(node->right);
//                 if (node->left != NULL)
//                     q.push(node->left);
//                 level.push_back(node->val);
//             }
//             ans.push_back(level);
//         }
//         return ans;
//     }
// public:
//     vector<int> rightSideView(TreeNode* root) {
//         vector<vector<int>> ans = levelOrder(root) ;
//         vector<int> result;
//         for(int i  = 0 ; i < ans.size() ; i++){
//             result.push_back(ans[i][0]);
//         }
//         return result ; 
//     }
// };

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        if(root == NULL) return result;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int size = q.size();

            for(int i = 0; i < size; i++){
                TreeNode* node = q.front();
                q.pop();

                if(i == 0){
                    result.push_back(node->val);
                }

                if(node->right != NULL)
                    q.push(node->right);

                if(node->left != NULL)
                    q.push(node->left);
            }
        }

        return result;
    }
};