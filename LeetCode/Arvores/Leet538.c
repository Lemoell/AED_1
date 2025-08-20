/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

void convertBSTHelper (struct TreeNode* node, int* sum) {
    if (node == NULL) {
        return;
    }

    convertBSTHelper (node->right, sum);
    *sum += node->val;
    node->val = *sum;
    convertBSTHelper (node->left, sum);
}

struct TreeNode* convertBST (struct TreeNode* root) {
    int sum = 0;
    convertBSTHelper (root, &sum);
    return root;
}
