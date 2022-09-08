// class Solution {
// public:
//     string tree2str(TreeNode* root) {
// 		string ans = to_string(root->val);
// 		if (root->left) //left side check
// 			ans += "(" + tree2str(root->left) + ")";
// 		if (root->right) { //right side check
// 			if (!root->left) ans += "()"; //left side not present, but right side present
// 			ans += "(" + tree2str(root->right) + ")"; 
// 		}
// 		return ans;
// 	}
// };


class Solution {
public:
  string tree2str(TreeNode *root) {
    if (root == NULL)
      return "";
    string val;
    val = to_string(root->val);

    if (root->left == NULL and root->right == NULL)
      return val;
      
    if (root->right == NULL)
      return val + "(" + tree2str(root->left) + ")";
    return val + "(" + tree2str(root->left) + ")(" + tree2str(root->right) +
           ")";
           
  }
};