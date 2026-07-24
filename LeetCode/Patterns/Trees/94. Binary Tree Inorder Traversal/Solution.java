class Solution {
    List<Integer> result = new ArrayList<>();

    public List<Integer> inorderTraversal(TreeNode root) {
        inorder(root);
        return result;
    }

    private void inorder(TreeNode node) {
        if (node == null) {
            return;
        }

        // Left
        inorder(node.left);

        // Root
        result.add(node.val);

        // Right
        inorder(node.right);
    }
}
