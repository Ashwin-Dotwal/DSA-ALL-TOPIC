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

void postordertraversal(node *root)
{
  // base case
  if (root == NULL)
  {
    return;
  }
  // LRN
   postordertraversal(root->left);

   postordertraversal(root->right);
   
    cout << root->data << " ";
 
  
  
}

int main()
{
  node *root = NULL;
  postordertraversal(root);
  return 0;
}