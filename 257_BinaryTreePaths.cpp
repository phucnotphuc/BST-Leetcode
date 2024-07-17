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
    // vector<string> ans;
    // void dfs(TreeNode* node, string path) {
    //     if (node->left == NULL and node->right == NULL)
    //         ans.push_back(path + to_string(node->val));
    //     if (node->left)
    //         dfs(node->left, path + to_string(node->val) + "->");
    //     if (node->right)
    //         dfs(node->right, path + to_string(node->val) + "->");
    // }

    void solve(TreeNode* root, vector<string>& res, string val){
        if (root == NULL) return;
        if (val != "") {
            val += "->";
            cout << val << " ";
        }
        val += to_string(root->val);
        
        if (root->left == NULL && root->right == NULL){
            res.push_back(val);
        } else {
            solve(root->left, res, val);
            solve(root->right, res, val);
        }
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        string val = "";
        solve(root, res, val);
        return res;
    }
};
