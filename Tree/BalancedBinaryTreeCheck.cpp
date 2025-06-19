
class Solution
{
public:
  int height(TreeNode *root)
  {
    if (root == NULL)
    {
      return 0;
    }

    int leftheight = height(root->left);
    int rightheight = height(root->right);
    int ans = max(leftheight, rightheight);

    return ans + 1;
  }

  bool isBalanced(TreeNode *root)
  {
    if (root == NULL)
      return true;

    int leftheight = height(root->left);
    int rightheight = height(root->right);
    int diff = abs(leftheight - rightheight);

    bool ans1 = (diff <= 1);

    bool leftAns = isBalanced(root->left);
    bool rightAns = isBalanced(root->right);

    if (ans1 && leftAns && rightAns)
      return true;
    else
      return false;
  }
};