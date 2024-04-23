/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
class Solution {
    public TreeNode LCA = null;
    public boolean find_LCA(TreeNode root,TreeNode p,TreeNode q){
        if(root == null) return false;

        boolean self = (root.val == p.val || root.val == q.val);

        boolean left = find_LCA(root.left,p,q);
        if(LCA != null) return true;

        boolean right = find_LCA(root.right,p,q);
        if(LCA != null) return true;

        if((left && right) || (left && self) || (right && self) ){
            LCA = root;
        }

        return self || left || right;
    }
    public TreeNode lowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
        find_LCA(root,p,q);
        return LCA;
    }
}