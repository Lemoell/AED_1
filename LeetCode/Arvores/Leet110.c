int verikHeight (struct TreeNode* root) {
    if (root == NULL) return 0;

    int leftHeight = verikHeight (root -> left);
    if (leftHeight == -1) return -1;

    int rightHeight = verikHeight (root -> right);
    if (rightHeight == -1) return -1;

    if (abs(leftHeight - rightHeight) > 1)
        return -1;

    return (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;
}
bool isBalanced(struct TreeNode* root) {
    return verikHeight(root) != -1;
}