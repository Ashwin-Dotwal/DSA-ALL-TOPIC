#include <iostream>
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
int main()
{
  node *root = NULL;
  root = buildtree();
  return 0;
}