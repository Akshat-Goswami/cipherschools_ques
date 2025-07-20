class Solution {
  public:
    int height(Node* node) {
        if (node == NULL) return -1;  // height of empty tree is -1 (edge count)

        int leftHeight = height(node->left);
        int rightHeight = height(node->right);

        return 1 + max(leftHeight, rightHeight);
    }
};
