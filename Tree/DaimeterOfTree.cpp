#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
  int data;
  node *left;
  node *right;

  node(int data)
  {
    this->data = data;
    left = NULL;
    right = NULL;
  }
};
node *buildtree()
{
  int data;
  cout << " enter the data" << endl;
  cin >> data;

  if (data == -1)
  {
    return NULL;
  }
  // step A B C
  node *root = new node(data);

  cout << "enter data for left part of " << data
       << "node" << endl;
  root->left = buildtree();

  cout << "enter data for right part of " << data
       << "node" << endl;
  root->right = buildtree();
  return root;
}
// levelorderytraversel
void levelordertraversal(node *root)
{
  queue<node *> q;
  // initially
  q.push(root);

  while (!q.empty())
  {
    // A
    node *temp = q.front();
    // B
    q.pop();
    // c
    cout << temp->data << " ";
    // D
    if (temp->left)
    {
      q.push(temp->left);
    }
    if (temp->right)
    {
      q.push(temp->right);
    }
  }
}

int height(node *root)
{
  if (root == NULL)
    return 0;

  int leftheight = height(root->left);

  int rightheight = height(root->right);

  int ans = max(leftheight, rightheight) + 1;

  return ans;
}

int diameter(node *root)
{
  if (root == NULL)
  {
    return 0;
  }
  int opt1 = diameter(root->left);
  int opt2 = diameter(root->right);
  int opt3 = height(root->left) + height(root->right);

  int ans = max(opt1, max(opt2, opt3));

  return ans;
}

int main()
{
  node *root = NULL;
  root = buildtree();
  levelordertraversal(root);
  cout << "height" << height(root) << endl;
  return 0;
}