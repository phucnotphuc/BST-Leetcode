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
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if (!root) return res;
        queue < TreeNode*> q;
        q.push(root);
        while (!q.empty()){
            vector<int> v;
            int s = q.size();
            for (int i = 0; i < s; i++){
                TreeNode* cur = q.front(); 
                q.pop();
                v.push_back(cur->val);
                if (cur->left != NULL) q.push(cur->left);
                if (cur->right != NULL) q.push(cur->right);
            }
            res.push_back(v);
        }
        return res;
    }
};
